#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main (int argc, char* argv[])
{
printf ("argc: %d\n", argc);
if (argc != 4)
{
    printf ("Niepoprawne wywolanie programu! Poprawne wywolanie: 'liczba' 'operator' 'liczba\n");
    return 0;
}
int a, b;
char* arg1 = argv[1];
char* arg2 = argv[3];
char operator;
for (int i = 0; i < strlen(arg1); i++)
{
    if (!isdigit(arg1[i]))
    {
        printf ("Pierwszy argument jest niepoprawny!\n");
        return 0;
    }
}
for (int i = 0; i < strlen (arg2); i++)
{
    if (!isdigit (arg2[i]))
    {
    printf ("Drugi argument jest niepoprawny!\n");
        return 0;
    }
}
a = atoi (arg1);
b = atoi (arg2);

if ((*argv[2] == '+' || *argv[2] == '-' || *argv[2] == '*' || *argv[2]== '/' || *argv[2] == '%') && strlen (argv[2]) == 1)
{
    operator = *argv[2];
}
else 
{
    printf ("Niepoprawny operator! sprobuj ponownie\n");
    return 0;
}
switch (operator)
{
    case '+': 
    printf ("Wynik %d + %d = %d\n", a, b, a+b);
    break;
    
    case '-':
    printf ("Wynik %d - %d = %d\n", a, b, a-b);
    break;

    case '*':
    printf ("Wynik %d * %d = %d\n", a, b, a*b);
    break;

    case '/':
    if (b!=0)
        {
            printf ("Wynik %d / %d = %lf\n", a, b, (double)a/b);
        }
    else
    printf ("Blad - dzielenie przez zero");
    break;
    
    case '%': 
       if (b!=0)
        {
            printf ("Wynik %d %% %d = %d\n", a, b, a%b);
        }
    else
    printf ("Blad - dzielenie przez zero\n");
    break;
}
    return 0;
}