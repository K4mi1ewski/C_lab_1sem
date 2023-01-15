#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (void)
{

time_t czas;
srand ((unsigned int) time (&czas));
const int N = 10;
double tab[N];
int mindex = 0, maxindex = 0;
for (int i = 0; i < N; i++)
{
    
    tab[i] = ((rand()%20001)/100.0)-100.0;
    printf ("tab[%d] = %7.2lf\n", i, tab[i]);
    if (tab[i] < tab [mindex])
    {
        mindex = i;
    }
    else if (tab [i] > tab [maxindex])
    {
        maxindex = i;
    }
}
printf ("Indeks najmniejszego elementu: %d, indeks najwiekszego elementu: %d\n", mindex, maxindex);
double bufor = tab [mindex];
tab [mindex] = tab [maxindex];
tab [maxindex] = bufor;
printf ("Tablica po zamianie: \n");
for (int i = 0; i < N; i++)
{
    printf ("tab[%d] = %7.2lf\n", i, tab[i]);

}




    return 0;
}