#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int mini (float *first, int n);
float * maxi (float *first, float *last);
int main (void)
{
time_t czas;
srand ((unsigned int) time (&czas)); 
float tab [100];
for (int i = 0; i < 100; i++)
{
    tab[i] = (rand()/(1.0+RAND_MAX))*6 - 3;
}
int min = mini (tab, 100);
float * max = maxi (tab, tab+99);
printf ("Minimalna wartosc w tablicy: %f, adres: %p\n", tab[min], tab+min);
printf ("Maksymalna wartosc w tablicy: %f, adres: %p", *max, max);
printf ("\n--------------------------------\n");
printf ("Elementy od 0 do 9: max: %f, adres: %p, min: %f, adres: %p\n", *maxi(tab, tab+9), maxi (tab, tab+9), tab[mini(tab, 10)], tab+mini(tab,10));
printf ("Elementy od 10 do 19: max: %f, adres: %p, min: %f, adres: %p\n", *maxi(tab+10, tab+19), maxi (tab+10, tab+19), tab[mini(tab+10, 10)], tab+mini(tab+10,10));
printf ("Elementy od 20 do 29: max: %f, adres: %p, min: %f, adres: %p\n", *maxi(tab+20, tab+29), maxi (tab+20, tab+29), tab[mini(tab+20, 10)], tab+mini(tab+20,10));
printf ("Elementy od 30 do 39: max: %f, adres: %p, min: %f, adres: %p\n", *maxi(tab+30, tab+39), maxi (tab+30, tab+39), tab[mini(tab+30, 10)], tab+mini(tab+30,10));
printf ("Elementy od 40 do 49: max: %f, adres: %p, min: %f, adres: %p\n", *maxi(tab+40, tab+49), maxi (tab+40, tab+49), tab[mini(tab+40, 10)], tab+mini(tab+40,10));
printf ("Elementy od 50 do 59: max: %f, adres: %p, min: %f, adres: %p\n", *maxi(tab+50, tab+59), maxi (tab+50, tab+59), tab[mini(tab+50, 10)], tab+mini(tab+50,10));
printf ("Elementy od 60 do 69: max: %f, adres: %p, min: %f, adres: %p\n", *maxi(tab+60, tab+69), maxi (tab+60, tab+69), tab[mini(tab+60, 10)], tab+mini(tab+60,10));
printf ("Elementy od 70 do 79: max: %f, adres: %p, min: %f, adres: %p\n", *maxi(tab+70, tab+79), maxi (tab+70, tab+79), tab[mini(tab+70, 10)], tab+mini(tab+70,10));
printf ("Elementy od 80 do 89: max: %f, adres: %p, min: %f, adres: %p\n", *maxi(tab+80, tab+89), maxi (tab+80, tab+89), tab[mini(tab+80, 10)], tab+mini(tab+80,10));
printf ("Elementy od 90 do 99: max: %f, adres: %p, min: %f, adres: %p\n", *maxi(tab+90, tab+99), maxi (tab+90, tab+99), tab[mini(tab+90, 10)], tab+mini(tab+90,10));
    return 0;
}
int mini (float *first, int n)
{
int minimum = 0;
for (int i = 1; i < n; i++)
{
    if (*(first+i) < *(first+minimum))
    {
        minimum = i;
    }
}
return minimum;
}
float *maxi (float *first, float*last)
{
 float *p = first;
 int n = (last - first + 1);
 for (int i = 1; i < n; i++)
 {
    if ((*first+i) > (*p))
    p = (first+i);
 }

return p;
}