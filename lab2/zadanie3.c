#include <stdio.h>

int main (void)
{
    char sign; 
    do
    {
        printf ("Prosze podac duza litere: ");
        scanf ("%c", &sign);
    } while (sign < 65 || sign > 90);
    int n = sign - 65 + 1;
    
    printf ("\n");
    for (int i = 0; i < n; i++)
    {
        char c = 'A';
        for (int j = 0; j < n-i-1; j++)
        {
            printf (" ");
        }
        for (int j = 0; j < i+1; j++)
        {
            printf ("%c", c);
            c++;
        }
        c--; 
        while (c > 65)
        {
            c--;
            printf ("%c", c);
        }
        printf ("\n");
    }


    return 0;
}