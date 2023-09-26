#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (void)
{
const int N = 10;
int tab [N];
time_t t;
srand ((unsigned int) time (&t));
int max;
for (int i = 0; i < N; i++)
{   
    tab[i] = rand()%201 - 100;
    printf ("Element [%d] = %+3d\n", i, tab[i]);
    if (i == 0)
    {
        max = tab[0];
    }
    else if (tab [i] > max)
    {
        max = tab[i];
    }
}
int licznik=0;
for (int i = 0; i < N; i++)
{
    if (max == tab[i])
    {
        licznik++;
    }
    
}
printf ("\n Maksymalny element to %d, wystepuje %d razy\n", max, licznik);

    return 0;
}