#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int number_cmp (char* num_1, char* num_2)
{
    if (strlen (num_1) > strlen (num_2))
        {
            printf ("Pierwsza jest wieksza\n");
            return 1;
        }
        
    else if (strlen(num_1) < strlen (num_2))
        {
            printf ("Druga jest wieksza\n");
            return -1;
        }
    else
    {
        int wynik = strcmp (num_1, num_2);
        if (wynik > 0)
        {
            printf ("Pierwsza jest wieksza!\n");
        }
        else if (wynik < 0)
        {
            printf ("Druga jest wieksza!\n");
        }
        else
        {printf("Liczby sa rowne\n");}
        return wynik;
    }
}
int main (int argc, char* argv[])
{
if (argc != 3)
{
    printf ("Niepoprawne wywolanie!\n");
    return 0;
}
char* pierwsza = argv [1];
char* druga = argv [2];
number_cmp (pierwsza, druga);

    return 0;
}