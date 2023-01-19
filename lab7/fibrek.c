#include <stdio.h>
#include <stdlib.h>
#define N 20
int fibonacci (int n, int depth);

int main (int argc, char* argv)
{
 int num;
 printf ("Podaj, ktory wyraz ciagu Fibonacciego mam obliczyc: ");
 scanf ("%d", &num);
 
 printf ("rFibonacci(%d)=%d\n",num, fibonacci(num, 0));

    return 0;
}

int fibonacci (int n, int depth)
{

    static int counter=0; 
    int tabf[N]={0,1};
    printf ("%d",depth);
        for (int i = 0; i<depth;i++)
        {
            printf (".");
        }
    counter++;
    if (n >=2)        
    {
        printf(", Obliczam f(%d) = f(%d) + f(%d), l=%d\n", n, n-1, n-2, counter);
        tabf[n] = fibonacci (n-1, depth+1) + fibonacci (n-2, depth+1);
        
    }
    else
    {
        printf (", Zwracam f(%d), l=%d\n", n, counter);
        
    }
    return tabf[n];
}