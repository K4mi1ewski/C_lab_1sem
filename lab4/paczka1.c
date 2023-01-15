#include <stdio.h>
int main (void)
{
    char tab[9];
    tab[8] = '\0';
    printf ("Podaj liczbe binarną składającą się z 8 cyfr (podawaj od najstarszego bitu):   ");
    for (int i = 0; i < 8; i++)
    {
        char sign;
        do
        {
            scanf ("%c", &sign);
        } while (sign != '0' && sign != '1');
        tab [i] = sign;
    }
printf ("\nWczytana liczba: %s\n", tab);
//konwersja na dziesietny:
int decimal = 0;
for (int i = 0; i < 8; i++)
{
    int add = 1;
    for (int j = 0; j < 7-i; j++)
    {
        add = add*2;
    }    
   (tab [i] == '0') ? (decimal +=0) : (decimal = decimal+add);  

}
printf ("Liczba w systemie dziesietnym: %d\n", decimal);



    return 0;
}