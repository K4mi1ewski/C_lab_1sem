#include <stdio.h>
#include <stdlib.h>

int fibonacci (int n, int depth)
{
    static int counter = 0;
    counter++;
    printf ("%d", depth);
    for (int i = 0; i < depth; i++)
    {
        printf (".");
    }
    printf(", ");

    if (n==0 || n ==1)
    {
        printf ("Zwracam f(%d), l = %d\n", n, counter);
        return n;
    }
    else
    {
        printf ("Obliczam f(%d) = f(%d) + f(%d), l = %d\n", n, n-1, n-2, counter);
        return fibonacci (n-1, depth+1) + fibonacci (n-2, depth+1);
    }
    
    
   

}
int main (int argc, char* argv[])
{   
    printf ("Podaj ktory wyraz ciagu Fibonacciego obliczyc: ");
    int x;
    scanf ("%d", &x);
    printf ("rFibonacci(%d) = %d\n", x, fibonacci (x, 0));


    return 0;
}