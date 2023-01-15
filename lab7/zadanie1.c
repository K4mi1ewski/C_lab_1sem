#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main (void)
{

char lancuch1[] = "Ala ma kota i Ala ma psa";// ma kota i Ala ma psa
char lancuch2[] = "Ala";
int length = strlen (lancuch2);

char* p = lancuch1;
printf ("Lancuch 1: %s\n", lancuch1);
printf ("Lancuch 2: %s\n", lancuch2);

for (p = strstr (lancuch1, lancuch2); p!=NULL; p = strstr(p, lancuch2))
{
    char* temp = p;
    while ((*temp)!='\0')
    {
        *temp = *(temp+length);
        temp++;
    }

}
printf ("Lancuch po usunieciu: %s\n", lancuch1);
    return 0;
}