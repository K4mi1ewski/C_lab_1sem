#include <stdio.h>
int main (void)
{
    double eps = 1e-9;
    double skladnik = 1;
    double suma = 0;
    int i;
    for (i=1; skladnik > eps; i++)
    {
        skladnik = 1.0/(i*i);
        suma+=skladnik;
    }
    printf ("Suma elementow: %.2lf\n", suma);
    printf ("Liczba zsumowanych elementow: %d\n", i);

}