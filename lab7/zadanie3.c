#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (int argc, char* argv[])
{   
    if (argc == 1)
    {
        printf("Brak argumentow wywolania!\n");
        return 1;
    }
    int rozmiar=0;
    printf ("Wypisanie argumentow:\n");
    for (int i = 1; i<argc; i++)
    {
        printf ("argv[%d]: %s\n", i, argv[i]);
        rozmiar+=strlen(argv[i]);
    }
   printf ("Rozmiar=%d\n", rozmiar);
    char napis [rozmiar+1];
    napis [rozmiar] = '\0';
    strcpy (napis, argv[1]);
    for (int i = 2; i<argc; i++)
    {
        strcat (napis, argv[i]);
        printf ("%d.%s\n", i, napis);
    }
    printf ("Wynik: %s\n", napis);
   return 0;
}