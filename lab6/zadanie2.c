#include <stdio.h>
#include <stdlib.h>

void razem (int size1, int size2, int* tablica1, int* tablica2, int* scalona);
int main (void)
{


    int tab1[] = {1, 12, 13, 14, 22};
    int tab2[] = {3, 4, 13, 45, 54, 55, 56, 65};
    int a = sizeof (tab1)/sizeof(*tab1); //liczba elementow w tab1
    int b = sizeof (tab2)/sizeof(*tab2); //liczba elementow w tab2
    int tab3[a+b]; 
    razem (a, b, tab1, tab2, tab3);
    printf ("Razem: ");
    for (int i = 0; i < a+b; i++)
    {
        printf ("%d ", tab3[i]);
    }
    printf ("\n");
    return 0;
}
void razem (int size1, int size2, int* tablica1, int* tablica2, int* scalona)
{
    
    int i = 0, j = 0;
    while (i < size1 && j < size2)
    {
        if (tablica1[i] < tablica2[j])
        {
            scalona[i+j] = tablica1[i];
            i++;
        }
        else 
        {
            scalona[i+j] = tablica2[j];
            j++;
        }
    }
    if (i = size1)
    {
        while (j < size2)
        {
            scalona [i+j] = tablica2 [j];
            j++;
        }
    }
    else
    {
        while (i < size1)
        {
            scalona [i+j] = tablica1 [i];
            i++;
        }
    }
    
}