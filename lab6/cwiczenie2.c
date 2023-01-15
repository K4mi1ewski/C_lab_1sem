#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main (int argc, char* argv [])
{
if (argc != 2)
{
    printf ("Niepoprawne argumenty wywolania, program konczy dzialanie!\n");
    return 0;
}
int N = strlen (argv[1]);
char arg1[N]; 
strcpy(arg1, argv[1]);
double Liczba=0.0;
double Wykladnik=0.0;
char* stringend;
char *operator;
for (int i = 0; i < strlen (arg1); i++)
{
 if (*(arg1+i) == '^' || (*(arg1+i) == '*' && *(arg1+i+1) == '*'))
 {
    char temp [i+1];
    temp [i] = '\0';
    for (int j = 0; j < i; j++)
    {
        if (!isdigit(arg1[j]) && arg1[j] != '.' && arg1[j] != ' ' && arg1[j] != '-')
        {
            printf ("niepoprawny argument wywolania!\n");
            return 0;
        }

        temp [j] = arg1 [j];
    }
    Liczba = strtod (temp, &stringend);
    int k;
    if (arg1[i+1] == '*')
    {k = i+2; operator = "**";}
    else 
    {k = i+1; operator = "^";}
    char temp2 [strlen(arg1) - k + 1];
    temp2 [strlen(arg1)-k] = '\0';
    for (int j = k; j < strlen(arg1);j++)
    {
         if (!isdigit(arg1[j]) && arg1[j] != '.' && arg1[j] != ' ' && arg1[j] != '-')
        {
            printf ("niepoprawny argument wywolania!\n");
            return 0;
        }

        temp2 [j-k] = arg1 [j];
    }   
    
    Wykladnik = strtod (temp2, &stringend);
    break;    
 }
 else if (i == strlen(arg1) - 1) //jesli badamy ostatni znak napisu i program nie wszedł do warunku wyzej, to znaczy ze nie pojawil sie odpowiedni operator
 {
    printf ("Brak poprawnego operatora w argumencie wywolania!\n");
    return 0;
 }
}


double wynik = pow (Liczba, Wykladnik);
printf ("%lf %s %lf = %lf\n", Liczba, operator, Wykladnik, wynik);
    return 0;
}