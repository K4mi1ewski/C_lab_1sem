#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
    time_t czas;
    srand ( (unsigned int) time (&czas));
    int rozmiar;
    scanf ("%d", &rozmiar);
    int tab [rozmiar];
    for (int i = 0; i < rozmiar; i++)
    {
        tab [i] = (rand()%90) + 10;
        printf ("Tab [%d] = %d, liczba dziesiatek: %d\n", i, tab[i], tab[i]/10);
    }
    for (int i = 0; i < rozmiar; i++)
    {
        if ((tab[i]/10)%2 == 1)
        {
            for (int j = i+1; j < rozmiar; j++)
            {
                if ((tab[j]/10)%2 == 0)
                {
                    int temp = tab[i];
                    tab [i] = tab [j];
                    tab [j] = temp;
                    j = rozmiar;
                }
            }
        }
    }
printf ("\nPo zamianie: \n");
for (int i = 0; i < rozmiar; i++)
    {
        printf ("Tab [%d] = %d, liczba dziesiatek: %d\n", i, tab[i], tab[i]/10);
    }


    return 0;
}