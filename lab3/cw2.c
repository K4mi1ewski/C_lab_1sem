#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (void)
{
time_t czas;
srand ((unsigned int) time (&czas));
const int N = 40;
int A[N];
for (int i = 0; i < N; i++)
{
    A[i] = rand()%201 - 100;
    if (i!=0 && A[i]%i == 0)
    {
        printf ("Element podzielny przez indeks: A[%d] = %-4d\n", i, A[i]);
    }

}



    return 0;
}