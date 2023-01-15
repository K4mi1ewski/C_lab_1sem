#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (void)
{
    int a, b;
    int maska = 0;
    int n = sizeof(int)*8;    
    for (int i = 0; i < n/2 ; i++)
    {
        maska = maska << 1;
        maska = maska | 1;
    }
printf ("Podaj pierwsza liczbe:  ");
scanf ("%d", &a);
printf ("\nPodaj druga liczbe:  ");
scanf ("%d", &b);
int wynik;
if ( ((a&maska)^(b&maska)) == 0)
{
wynik = 1;
}
else
{
    wynik = 0;
}
 
 printf ("\nWartosc maski: %d", maska);
 printf ("\nWynik porownania: %d", wynik);
 
 
    return 0;
}