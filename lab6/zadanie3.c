#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main (void)
{
    time_t czas;
    srand ((unsigned int) time (&czas));
    char losuj_wyraz[11];
    losuj_wyraz[10] = '\0';
    for (int i = 0; i < 10; i++)
    {
        losuj_wyraz[i] = rand()%26 +97;
    }
    char dowolna = rand()%26 + 97;
    strchr (losuj_wyraz, dowolna);
    int licznik = 0;
    for (char * p = strchr(losuj_wyraz, dowolna); p != NULL; p = strchr(p + 1, dowolna)) // w przypadku braku wystapienia znaku funkcja zwraca null
        {
            licznik++;
        }
    if (licznik == 0)
    {
        printf ("Nie znaleziono wystapienia tej litery w lancuchu.\n");
    }
    else
    {
        printf ("Litera: %c, Indeks pierwszego wystapienia: %ld, Wystapila %d razy \n", dowolna, strchr(losuj_wyraz, dowolna) - losuj_wyraz, licznik);
    }
    return 0;
}