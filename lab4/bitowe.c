#include <stdio.h> 

int main ()
{  
   int liczba = 34;
   printf("%d >> 1 = %d\n", liczba, liczba >> 1); // 17
   printf("%d >> 2 = %d\n", liczba, liczba >> 2); // 8
   printf("%d << 1 = %d\n", liczba, liczba << 1); // 68
   printf("%d << 2 = %d\n", liczba, liczba << 2); // 136
    
   liczba = -55;
   printf("%d >> 1 = %d\n", liczba, liczba >> 1); // -28
   printf("%d >> 2 = %d\n", liczba, liczba >> 2); // -14
   printf("%d << 1 = %d\n", liczba, liczba << 1); // -110
   printf("%d << 2 = %d\n", liczba, liczba << 2); // -220
 
   getchar();
   return 0;
}