#include <stdio.h>
int main (void)
{
    char liczba [9]; // liczby z zakresu od 0 do 255
    liczba [8] = '\0';
    int numer;
    printf ("Podaj liczbe z zakresu od 0 do 255: ");
    do
    {
    scanf ("%d", &numer);
    if (numer > 255 || numer < 0 )
    {
        printf("\nLiczba poza zakresem [0, 255], wprowadź liczbe ponownie:   ");
    }
    } while (numer > 255 || numer  < 0);

    for (int i = 0; i < 8; i++)
    {
        if ((numer >> i) & 1)
        {
            liczba [7-i] = '1';
        }
        else
        {
            liczba [7-i] = '0';
        }
        
    }
    printf ("\nLiczba %d zapis binarny: %s\n", numer, liczba);


    return 0;
}