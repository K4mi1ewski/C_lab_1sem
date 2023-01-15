#include <stdio.h>
#include <stdlib.h>

int* find (int* tab, int ile, int x);

int main (void)
{
    int A [] = {4, 6, 7 ,7};
    int rozmiar = sizeof(A)/sizeof(*A);
    int n = 7;
    int licznik = 0;
    int* ptr = find (A, rozmiar, n);
    if (ptr != NULL)
    {
        int* iter = ptr;
        while (iter != A+rozmiar)
        {
            if (*iter == *ptr)
                licznik++;
            iter++;
        }
        printf ("Liczba znalezionych n = %d w tablicy: %d\n", n, licznik);   
    }
    else 
    printf ("Brak znalezionych wartosci n=%d w tablicy.\n", n);

    return 0;
}

int* find (int* tab, int ile, int x)
{
    int srednia = (*tab + *(tab+ile-1))/ile;
    if (ile==1 && *tab == x)
        return tab;
    else if (ile == 1)
        return NULL;

    
    if (x <= srednia)
        return find (tab, (ile+1)/2, x);
    else 
        return find (tab+((ile+1)/2), (ile+1)/2, x);
    
}