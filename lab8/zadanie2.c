#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main (int argc, char* argv[])
{
    if (argc != 2)
    {
        printf ("Niepoprawne wywolanie!\n");
        return 0;
    }
    char* arg = argv[1];
    char* p;
    char* s;
    if (strstr (arg, "cos"))
    {
        p = strchr (arg, '(');
        s = strchr (arg, ')');
        int n = s-p-1;
        char wynik [n+1]; wynik [n] = '\0';
        strncpy (wynik, p+1, n);
        //printf ("Wynik : %s", wynik);
        char* buff;
        double argument = strtod (wynik, &buff);
        double result = cos(argument);
        printf ("%s = %lf\n", arg, result);
    }
    else if (strstr (arg, "log"))
    {
    p = strchr (arg, '(');
    s = strchr (arg, ')');
        int n = s-p-1;
        char wynik [n+1]; wynik [n] = '\0';
        strncpy (wynik, p+1, n);
        char* buff;
        double argument = strtod (wynik, &buff);
        double result = log(argument);
        printf ("%s = %lf\n", arg, result);
    }
    else if (strstr(arg, "sin"))
    {
    p = strchr (arg, '(');
    s = strchr (arg, ')');
        int n = s-p-1;
        char wynik [n+1]; wynik [n] = '\0';
        strncpy (wynik, p+1, n);
        char*buff;
        double argument = strtod (wynik, &buff);
        double result = sin(argument);
        printf ("%s = %lf\n", arg, result);
    }
    else
    {
        printf ("Niepoprawny argument, dostepne funkcje: sin(x) cos(x), log(x)\n");
        return 0;
    }





    return 0;
}