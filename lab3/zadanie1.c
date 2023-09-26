#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (void)
{
time_t t;
srand ( (unsigned int) time (&t));

printf ("Podaj dlugosc pierwszej liczby: ");
int length1;
do { 
scanf ("%d", &length1);
} while (length1 >= 90 || length1 < 40);
int A[length1]; //pierwsza tablica
printf ("\nPodaj dlugosc drugiej liczby: ");
int length2;
do { 
scanf ("%d", &length2);
} while (length2 >= 90 || length2 < 40);
int B [length2]; //druga tablica
int length3;
length1 > length2 ? (length3 = length1+1) : (length3 = length2+1);
int C [length3]; //tablica wyniku 
for (int i = 0; i < length1; i++) //zapelnianie pierwszej tablicy
{
    if (i == length1-1)
    {
        A[i] = rand()%9+1;
    }
    A[i] = rand()%10;
}
for (int i = 0; i < length2; i++) //zapelnianie drugiej tablicy
{
    if (i == length2-1)
    {
        B[i] = rand()%9+1;
    }
    B[i] = rand()%10;
}
int p = 0;
int wieksza, mniejsza;
if (length1 < length2)
{
    mniejsza = length1;
    wieksza = length2;
}
else 
{
    mniejsza = length2;
    wieksza = length1;
}
for (int i = 0; i < length3; i++) //dodawanie
{
    if (i < mniejsza)
    {
        int x = (A[i] + B[i] + p)%10;
        C[i] = x;
    
        if (A[i]+B[i] + p >=10)
        {
            p = 1;
        }
        else
        {
            p = 0;
        }
    }
    else if (length1 == mniejsza && i!=length3-1)
    {
        
            C[i] = B[i] + p;
            p = 0;
    }
    else if (length2 == mniejsza && i!=length3-1)
    {
        C[i] = A[i] +p;
        p=0;
    }
    else
    {
        C[length3-1] = p;
    }

}



    return 0;
}