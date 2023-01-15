#include <stdio.h>
int main (void)
{
    char liczba [9];
    liczba [8] = '\0';
    char znak;
    printf ("Prosze wprowadzic 8 bitow: ");
    for (int i = 0; i < 8; i++)
    {
        scanf ("%c%*c",&znak);
        printf ("%d  ", znak);
        liczba [i] = znak;
    }
    printf ("\nLiczba binarnie: %s", liczba);
    int suma = 0;
    for (int i = 1; i < 8; i++)
    {
        int skladnik=1;
        for (int j = 0; j < 7-i; j++)
        {
            skladnik = skladnik*2;
        }
        liczba[i] == '1' ? (suma = suma+skladnik) : (suma+=0);
    }
    if (liczba[0] == '1')
    {
        suma = suma - 128; //2^7 = 128
    }

    printf ("\nLiczba calkowita w systemie dziesietnym: %d\n", suma);

return 0;
}
