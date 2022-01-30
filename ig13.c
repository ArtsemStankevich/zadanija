// Дан массив с числами от 1 до н, нарисуй из них елку.
// Например 
//      1
//  234567
//891011121
#include <stdio.h>

#define ARRAY 49

int main()
{
	int tab[ARRAY];
	for(int i=0; i<ARRAY; i++)
	{
		tab[i] = i+1;
	}
	int i = 0;
	int j = 1;
	while(i<ARRAY)
	{
		for(int k=0; k<13-j; k++)
			printf(" ");
		int ex=1;
		while(ex<=j)
		{
			printf("%d", tab[i]);
			i++;
			ex++;
		}
		j=j+2;
		
		printf("\n");	
	}	
}
