#include <stdio.h>
int main (void)
{
    unsigned int liczba;

    printf ("Prosze podac liczbe naturalna: ");
    scanf ("%d", &liczba);
    int var = liczba;
    int jedynki = 0;
    do
    {
        if (var&1)
        {
            jedynki++;
        }
        var = var >> 1;
    } while (var != 0);
    printf ("Liczba %d ma bitow ustawionych na 1: %d\n", liczba, jedynki);
    






    return 0;
}