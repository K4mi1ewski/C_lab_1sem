#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main (void)
{



char* napis = "   2.2 ";
char* stringend;
double liczba = strtod (napis, &stringend);
printf ("lf: %lf ", liczba);
    return 0;
}