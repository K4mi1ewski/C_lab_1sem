#include <stdio.h>
#include <stdlib.h>

int* find (int* tab, int ile, int x);

int main (void)
{
    int A [] = {22, 22, 22, 22, 22, 22, 24, 25, 25};
    int rozmiar = sizeof(A)/sizeof(*A);
    int n = 24;
    int licznik = 0;
    int* ptr = find (A, rozmiar, n);
    if (ptr != NULL)
    {
        int* iter = ptr;
        while (*iter == *ptr)
        {
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
    int mediana = tab [((ile+1)/2)-1];
    if (ile==1 && *tab == x)
        return tab;
    else if (ile == 1)
        return NULL;

    
    if (x <= mediana) // w ten sposob zawsze zwrocony wskaznik bedzie pierwszym wystapieniem elementu w tablicy
        return find (tab, (ile+1)/2, x);
    else 
        return find (tab+((ile+1)/2), ((ile+1)/2), x);
    
}