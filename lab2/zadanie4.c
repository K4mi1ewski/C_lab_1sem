#include <stdio.h>
#include <math.h>
#define EPS 1e-8

int main (void)
{
    double suma = 1;
    double skladnik = 1;
    int i;
    for (i=1; fabs(skladnik) > EPS; i++)
    {
        skladnik = 1/(i*i);
        suma+=skladnik;

    }
printf ("\nLiczba zsumowanych skladnikow: %d, suma = %.4d\n", i, suma);



    return 0;
}