#include <stdio.h>

int main (void)
{

int n;
do
{
    printf ("Podaj cyfre: ");
    scanf ("%d", &n);

} while (n < 0 || n > 9);
printf ("\n");

for (int i = 0; i < n+1; i++)
{
for (int j = 0; j<i; j++)
{
    printf (" ");
}
int k = n;
for (int j = 0; j < (n-i); j++)
{
    printf ("%d", k);
    k--;
}
printf (" ");
while (k >=0)
{
    printf ("%d", k);
    k--;
}

printf ("\n");
}
return 0;
}