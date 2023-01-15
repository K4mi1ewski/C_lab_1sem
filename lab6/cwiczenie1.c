#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void funkcja (char* lancuch);

int main (int argc, char* argv[])
{

char *napis = argv[1];
printf ("Przed: %s", napis);
funkcja (napis);
printf ("\nPo: %s", napis);



    return 0;
}

void funkcja (char * lancuch)
{
    if (lancuch == NULL)
        return;
    for (int i = 0; lancuch[i]!= 0; i++)
    {
        if (lancuch[i] == ' ' || lancuch [i] == '\t')
        {
            for (int j = i; lancuch[j]!= 0; j++)
            {
                lancuch[j] = lancuch[j+1];
            }
        i--;
        } 
    }

}