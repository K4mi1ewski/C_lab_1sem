#include <stdio.h>
 
int main (void)
{  
   unsigned int liczba;
   scanf ("%d", &liczba);
   unsigned int liczba2;  
      
   // wczytanie wartosci - np. 19 czyli 00000000000000000000000000010011; po odwroceniu bitow parzytych powinno byc: 01010101010101010101010101000110
   unsigned int maska=1;
   //printf ("unsigned int: %ld", sizeof(unsigned int));
   for (int i = 0; i <= (4*sizeof(unsigned int))-1; i++)
   {
    maska = maska << 2;
    maska = (maska | 1);
    
   } 
   printf ("\nMaska: %d\n", maska);
   //printf("Liczba wprowadzona %d po odwróceniu parzystych bitow: %d \n",liczba, liczba2);  // Liczba wprowadzona 19 po odwroceniu bitow parzytych: 1431655750 
    liczba2 = liczba^maska;
    printf("Liczba wprowadzona %d po odwróceniu parzystych bitow: %d \n",liczba, liczba2);  // Liczba wprowadzona 19 po odwroceniu bitow parzytych: 1431655750 
   return 0;
}
