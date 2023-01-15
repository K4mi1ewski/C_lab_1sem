#include <stdio.h>
int main (void)
{
    int a;
    printf ("Podaj liczbe: ");
    scanf ("%d", &a);
    if (a & 1 == 1)
    {
        printf ("Wczytana liczba jest nieparzysta\n");
    }
    else 
    {
        printf ("Wczytana liczba jest parzysta\n");
    }








    return 0;
}