#include <stdio.h>
#include <stdlib.h>
#define N 30
void czytaj (int* lifo, int* wys);
void dodaj (int wartosc, int* lifo, int* wys);
int* zbierz (int* lifo, int* wys);
void menu ();
int main (void)
{
int stos [N];
int wysokosc = 0;
int wybor = 0; 
while (wybor != 4)
{
    menu();
    scanf ("%d", &wybor);
    switch (wybor)
    {
        case 1:
        printf ("Jaka wartosc dodac?: ");
        int arg; 
        scanf ("%d", &arg);
        dodaj (arg, stos, &wysokosc);
        break;
        case 2:
        czytaj (stos, &wysokosc);
        break;
        case 3:
        int* zdjety = zbierz (stos, &wysokosc);
        if (zdjety != NULL)
            printf ("\nZdjety element to %d", *zdjety);
        break;
        case 4: printf ("Program konczy dzialanie!\n");
        break;
        default: printf ("niepoprawny wybor, wprowadz cyfre jeszcze raz!\n");
        break;


    }
}
    return 0;
}
void dodaj (int wartosc, int* lifo, int* wys)
{
    if (*wys >= N)
    {
        printf ("Stos przepelniony!\n");
        return;
    }
    (*wys)++;
    int indeks = *wys - 1;
    *(lifo+indeks) = wartosc;
}
void czytaj (int* lifo, int* wys)
{
    if (*wys <= 0)
    {
        printf ("Stos jest pusty!\n");
        return;
    }
    printf ("\nCzytanie stosu od najstarszego elementu: ");
    for (int i = 0; i < *wys; i++)
    {
        printf (" %d", *(lifo+i));
    }
    return;
}
int* zbierz (int* lifo, int* wys)
{
    int* p = NULL;
    if (*wys<= 0)
    {
        printf ("Stos jest pusty!\n");
        return NULL;
    }
    int indeks = *wys - 1;
    p = lifo+indeks;
    (*wys)--;
    return p;
}
void menu()
{
    printf ("\nWybierz, co chcesz zrobic:\n");
    printf ("1. Dodaj element do stosu\n");
    printf ("2. Wyswietl elementy stosu\n");
    printf ("3. Zbierz element ze stosu\n");
    printf ("4. Zakoncz program      ");
    return;
} 