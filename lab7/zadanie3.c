#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (int argc, char* argv[])
{   
    if (argc == 1)
    {
        printf ("Program bez argumentow wywolania!\n");
        return 0;
    }
    int rozmiar = 0;
    for (int i = 1; i < argc; i++)
    {
        rozmiar += strlen (argv[i]);
    }
    char napis [rozmiar+1] = "";
    for (int i = 1; i < argc; i++)
    {
        int trueflag = 1;
        for (int j = 1; j < i; j++)
        {
            if (strcmp (argv[i], argv[j]))
            {
            trueflag = 0;
            break;
            }
        }
    if (trueflag)
     strcat (napis, argv[i]);
    }

    printf ("Wszystkie argumenty:\n");    
for (int i = 0; i < argc; i++)
{
    printf ("%s\n", argv[i]);
}
printf ("\nNapis polaczony: %s\n", napis);
    return 0;
}