#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (void)
{
const int N = 10;
double tab [N];
time_t t;
srand ((unsigned int) time (&t));
for (int i = 0; i<N; i++)
{
    tab[i] = ((rand()/(1.0+RAND_MAX))*200)-100;
    printf ("Tab [%d] = %6.2f\n", i, tab[i]);
}
for (int i = 0; i < N/2; i++)
{
    double bufor;
    bufor = tab [i];
    tab [i] = tab [i+(N/2)];
    tab [i+(N/2)] = bufor;
}
printf ("Po zamianie: \n");

for (int i = 0; i<N; i++)
{
    printf ("Tab [%d] = %+6.2f\n", i, tab[i]);
}





    return 0;
}