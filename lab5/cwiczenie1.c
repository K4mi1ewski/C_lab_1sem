#include <stdio.h>
#define N 30
void show (int * p);
int empty (int * p);
void push (int *p, int var);
int pop (int * p);
int pierwszy = 0; //indeks pierwszego elementu stosu
int top = 0; //wysokosc stosu
int main (void)
{

int stos [N];




return 0;

}

void show (int *p)
{
if (top == 0)
{
    printf ("Stos jest pusty!\n");
    return;
}
printf ("Elementy stosu od najstarszego: \n");
for (int i = 0; i < top; i++)
{
    printf ("Stos [%d]: %d\n", i+1, *(p+i)); 
}
}

int empty (int *p)
{
    if (top == 0)
    {
        printf ("Stos jest pusty!\n");
        return 0;
    }
    else
    {
        printf ("Stos nie jest pusty! \n");
        return 1;
    }
}

void push (int *p, int var)
{
    *(p+top) = var;
    top++;
}

int pop (int *p)
{
    int var = *(p+top-1);
    free (p+top-1);
    top--;
    return var;



}


