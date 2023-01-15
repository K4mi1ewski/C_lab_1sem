#include <stdio.h>
int main(void)
{
    char liczba [5];
    liczba [4] = '\0';
    unsigned int numer;
    do
    {
     scanf ("%d",&numer);
    } while (numer > 4095 || numer < 0);
   unsigned int var = numer;
    for (int i = 0; i < 4; i++)
    {
        int suma = 0;
        for (int j = 0; j < 3; j++)
        {
        int skladnik = 1;
            for(int k = 0; k < j; k++ )
            {
                skladnik = skladnik*2;
            }    
        if (var&1)
        {
            suma = suma + skladnik;
        }
        var = var >> 1;
        }
    
        liczba [3-i] = suma+48;
    }
    printf ("\nLiczba %d zapis osemkowy: %s\n", numer, liczba);



    return 0;
}