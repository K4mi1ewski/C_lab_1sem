#include <stdio.h>
#include <math.h>

int main (void)
{
    double n;
    printf ("Prosze podac liczbe calkowita: ");
    scanf ("%lf", &n);
    
    if ( fabs(n) <= 1)
    {
        printf ("Podana liczba to zero lub jeden.\n");
        return 0;
    }
   
    double sq = sqrt (n);    
    int x=0;
    for (int i = 2; i <= (int) sq; i++)
    {
        if (((int)n)%i == 0)
        {
            printf ("Liczba %.0lf nie jest pierwsza. ", n);
            x = 1;
            break;
        }
    }
    if (x == 0)
    {
        printf ("Liczba %.0lf jest pierwsza. \n", n);
    }
    else
    {
        printf ("Dzielnikami liczby %.0lf sa: ", n);
        for (int i = 1; i <= n; i++)
        {
            if (((int)n)%i == 0)
            {
                printf ("%d ", i);
            }
        }
    }
    printf ("\n");
    return 0;
}