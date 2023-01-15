#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void fun1 (int tab[], int *p, int* n, int *z, int count);
int main (void)
{

    int parzyste;
    int nieparzyste;
    int zera;
    int tab1 [] = {1, 5, 0, [15]=2, 11, 14, 19, 22};
    int n1 = sizeof (tab1);
    int tab2 [] = {19, 22, [300] = 99, 89, 30, 22, 52};
    int n2 = sizeof (tab2);
    fun1 (tab1, &parzyste, &nieparzyste, &zera, n1);
    printf ("tablica tab1    ilosc zer: %d, ilosc parzystych: %d, ilosc nieparzystych: %d\n", zera, parzyste, nieparzyste);
    fun1 (tab2, &parzyste, &nieparzyste, &zera, n2);
    printf ("tablica tab2    ilosc zer: %d, ilosc parzystych: %d, ilosc nieparzystych: %d\n", zera, parzyste, nieparzyste);




    return 0;
}
void fun1 (int tab[], int *p, int *n, int *z, int count)
{
    *p = 0;
    *n = 0;
    *z = 0;
    for (int i = 0; i < (count/sizeof (*tab)); i++)
    {
        if (tab [i] == 0)
        {
            (*z)++;
        }
        else if (tab[i]%2 == 0)
        {
            (*p)++;
        }
        else
        {
            (*n)++;
        }
    }
}