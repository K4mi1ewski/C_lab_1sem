#include <stdio.h>
#include <stdlib.h>
#include <time.h>
float* where (float* first, float* last);
int main (void)
{
    int N;
    printf ("Podaj rozmiar tablicy: ");
    scanf ("%d", &N);
    float tab[N];
    time_t czas;
    srand ( (unsigned int) time (&czas));
    for (int i = 0; i < N; i++)
    {
        *(tab+i) = ((rand()/(1.0+RAND_MAX))*20 )- 10; 
        printf ("tab[%d] = %f, adres = %p\n", i, *(tab+i), tab+i);
    }
    float* maxujemny = where (tab, tab+N-1);
    if (maxujemny == NULL)
    {
        printf ("W tablicy nie ma wartosci ujemnych.\n");
    }
    else 
    {
        printf ("Najwiekszy ujemny element w tablicy: wartosc = %f, indeks = %ld, adres = %p\n", *maxujemny, maxujemny-tab, maxujemny);
    }

    return 0;
}
float* where (float* first, float* last)
{
    float* ptr=NULL;
    int rozmiar = last - first + 1;
    for (int i = 0; i < rozmiar; i++)
    {
        if (*(first+i) < 0 && (ptr == NULL || *(first+i) > *ptr))
        {
            ptr = first + i;
        }
    }
    return ptr;
}