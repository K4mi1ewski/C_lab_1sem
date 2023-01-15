#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (void)
{

time_t czas;
srand ( (unsigned int) time (&czas));
unsigned int N; //rozmiar tablicy do wczytania
printf ("Podaj rozmiar tablicy do wypełnienia liczbami pseudolosowymi: ");
scanf ("%d", &N);
int tab[N];
printf ("Przed: \n");
for (int i=0; i<N; i++)
{
    tab[i] = rand()%61;
    printf ("Tab [%d] = %d\n", i, tab[i]);
}
for (int i = 0; i < N; i++)
{
    if (tab[i]&1)
    {
        for (int j = i; j < N; j++)
        {
            if (!(tab[j]&1))
            {
                int temp = tab[i];
                tab [i] = tab [j];
                tab [j] = temp;
            }
        }
    }
}
printf ("\nPo zamianie: \n");
for (int i = 0; i<N; i++)
{
    printf ("Tab [%d] = %d\n", i, tab[i]);
}


    return 0;
}