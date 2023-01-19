#include <stdio.h>
#include <stdlib.h>
#define N 20

int fibonacci (int* tablica, int n, int depth, int* counter)
{
    (*counter)++;
    printf("%d", depth);
    for (int i = 0; i<depth; i++)
    {
        printf(".");
    }
    printf (", ");
    if (n == 0 || tablica[n]!=0)
    {
        printf ("Zwracam f(%d), l=%d\n", n, *counter);
        return tablica[n];
    }
    printf ("Obliczam f(%d) = f(%d)+f(%d), l=%d\n", n, n-1, n-2, *counter);
    return tablica [n] = fibonacci(tablica, n-1, depth+1, counter) + fibonacci (tablica, n-2, depth+1, counter);

}
int main (int argc, char* argv[])
{
int num;
printf ("Podaj, ktory wyraz ciagu Fibonacciego obliczyc: ");
scanf ("%d", &num);
int tabf [N] = {0, 1};
int l=0;
printf ("rFibo(%d)=%d\n", num, fibonacci(tabf, num, 0, &l));
return 0;
}