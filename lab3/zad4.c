#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (void)
{
time_t t;
srand ((unsigned int ) time (&t));
printf ("Podaj n: ");
long long int n = 1;
do {
    scanf ("%lld", &n);
} while (n < 10000);
printf ("\n");
const int N = 10;
int tab [N];
for (int i = 0; i < N; i++)
{
    tab [i] = 0;
}
for (int i = 0; i < n; i++)
{
    double random = -(rand()/(1.0+RAND_MAX))*10;
    int index = -(int)random;
   // printf ("random: %lf\n", random);
   // printf ("index: %d", index);
    tab [index] = tab[index] + 1;
}
for (int i = 0; i < N; i++)
{
    printf ("Przedzial (%d, %d]: %d punktow\n", -(i+1), -i, tab[i]);
}
return 0;
}