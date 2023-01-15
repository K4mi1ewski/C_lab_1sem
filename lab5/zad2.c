#include <stdio.h>
  
int main (void)
{  
   unsigned wynik = 0, liczba = 18; // 10010
   int p=1, n=3; // p - pozycja , n - to liczba bitów           
   // dla n=3 bity od pozycji p=1, czyli: 10010
   int maska=0;
   for (int i = 0; i < n; i++)
   {
    maska = maska << 1;
    maska = maska | 1;
   }
  // printf ("maska po n : %d", maska);
   for (int i = 0; i < p; i++)
   {
    maska = maska << 1;
   }
 //  printf ("\nMaska po p: %d", maska);
wynik = maska & liczba;
for (int i = 0; i < p; i++)
{
    wynik = wynik >> 1;
}
   printf("Wynik: %d",wynik); // 001 = 1
   return 0;
}