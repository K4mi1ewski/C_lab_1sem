#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define N 3

void hex(int p){
	char tab[N+1];

	 if (p < 0 || p > 4095)
     {
        printf ("Liczba %d jest poza zakresem [0, 4095]\n", p);
     } 
    else 
    {
        tab [N] = '\0';
        int var_0 = p/256;
        char sign0;
        if (var_0 < 10)
        {
            sign0 = var_0 + 48;
        }
        else
        {
            sign0 = var_0+55;
        }
       // printf ("var0=%d\n", var_0);
       // printf ("sign0 = %c\n", sign0);
        int var_1 = (p%256)/16;
        char sign1;
        if (var_1 < 10)
        {
            sign1 = var_1 + 48;
        }
        else
        {
            sign1 = var_1 + 55;
        }
        int var_2 = (p%256)%16;
        char sign2;
        if (var_2 < 10)
        {
            sign2 = var_2+48;
        }
        else
        {
            sign2 = var_2+55;
        }
        tab [0] = sign0;
        tab [1] = sign1;
        tab [2] = sign2;
        printf("%4d = %s\n", p, tab);
    }
	
}

int main(void){
	for(int i=-2; i<=4097; i++)
		if(i<3 || (i>8 && i<17) || i>4093 || i%1000==0)
			hex(i);
	return 0;
}