#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int fun_1 (int liczba, double*s, int*il);
int main (void)
{
int n;
printf ("Podaj, ile liczb wylosowac: ");
scanf ("%d", &n);
int iloczyn;
double srednia;
int suma = fun_1 (n, &srednia, &iloczyn);
printf ("Suma: %d\n", suma);
printf ("Iloczyn: %d\n", iloczyn);
printf ("Srednia: %lf\n", srednia);
    return 0;
}
int fun_1 (int liczba, double*s, int*il)
{
    time_t czas;
    srand ((unsigned int) time (&czas));
    int losowa;
    int suma = 0;
    *s = 0;
    *il = 1;
    for (int i = 0; i<liczba; i++ )
    {
        losowa = rand()%16;
        suma+=losowa;
        (*il) = (*il) * losowa;
    }
*s = (double)suma/liczba;
return suma;

}
