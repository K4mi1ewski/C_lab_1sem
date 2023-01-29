#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main (void)
{
    int rozmiar;
    printf ("Prosze podac rozmiar wylosowanego napisu:");
    scanf ("%d", &rozmiar);
    char S1 [rozmiar+1]; S1[rozmiar] = '\0';
    char S2 [4]; S2[3] = '\0';
    time_t czas;
    srand ((unsigned int) time (&czas));
    for (int i = 0; i < rozmiar; i++)
    {
        S1[i] = (rand()%26) + 97;
    }
    char losowa = rand()%26 + 97;
    S2[0] = S2[1] = S2[2] = losowa;
    printf ("S1 --> %s\n", S1);
    printf ("S2 --> %s\n", S2);
    char* p;
    printf ("Indeksy wystepowania: ");
    for (p = strstr(S1, S2); p!= NULL; p = strstr (p+3, S2))
    {
        printf ("%ld ", p-S1);
    }
    printf ("\n");
    return 0;
}