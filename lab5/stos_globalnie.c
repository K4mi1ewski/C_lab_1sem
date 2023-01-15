#include <stdio.h>
#include <stdlib.h>

#define N 30
int top = 0;
void show (int *p);
int empty (int * p);
void push (int *p, int var);
int pop (int *p);
int main (void)
{
int stos [N];
int wybor;
do {
printf ("Wybierz liczbe od 1 do 4:\n");
printf ("1. Pokaz stos\n");
printf ("2. Dodaj wartosc na stos\n");
printf ("3. Zbierz wartosc ze stosu\n");
printf ("4. Sprawdz czy stos jest pusty\n");
printf ("5. Zakoncz program\n");
scanf ("%d", &wybor);
switch (wybor)
{
    case 1: 
    show (stos); getchar(); getchar(); break;
    case 2:  
    printf ("Podaj wartosc ktora chcesz dodac na stos: ");
    int temp;
    scanf ("%d", &temp); 
    push (stos, temp); getchar(); getchar();
    break;
    case 3:
    pop (stos);getchar(); getchar(); break;
    case 4: 
    empty (stos); getchar(); getchar(); break;
    case 5: return 0;
    default: printf ("Niepoprawny wybor, sprobuj jeszcze raz!\n"); getchar(); getchar(); break;        
}
system ("cls");
} while (wybor != 5);
return 0;
}
void show (int *p)
{
if (top == 0)
{
    printf ("Stos jest pusty!\n");
    return;
}
printf ("Stos od najstarszego elementu: \n");
for (int i = 0; i < top; i++ )
{
    printf ("%d  ", *(p+i));
}
}

int empty (int * p)
{
    if (top == 0)
    {
        printf ("Stos jest pusty!\n");
        return 0;
    }
    else
    {
        printf ("Stos nie jest pusty!\n");
        return 1;
    }
}

void push (int *p, int var)
{
    if (top < 30)
    {
        *(p+top) = var;
        top++;
    }
    else
    {
        printf ("Przepełnienie stosu!\n");
    }
}

int pop (int *p)
{
    if (top > 0)
    {
        int var = *(p+top-1);
        free (p+top-1);
        top--;
        printf ("Usunieto wartosc: %d", var);
        return var;
    }
    else
    {
        printf ("Stos jest pusty!\n");
        return 0;
    }



}