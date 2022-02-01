//дан многочлен вида ах^н+ах^н-1....+ах+а. Найди его нули(придумай сам удобный способ для хранения многочлена в памяти, можешь использовать массив или строки/строки)
#include <stdio.h>
#include <math.h>

#define ARRAY 4

int main()
{
	float tab[ARRAY] = {1, 5, 4};
	float D = tab[1]*tab[1] - 4*tab[0]*tab[2];
	tab[3] = D;
	if(D>0)
	{
		float x1 = (-tab[1] + sqrt(tab[3]))/2*tab[0];
		float x2 = (-tab[1] - sqrt(tab[3]))/2*tab[0];
		printf("%f\n", x1);
		printf("%f", x2);
	}
	else if(D==0)
	{
		float x = -tab[1]/2*tab[0];
		printf("%f", x);
	}
	else if(D<0)
		printf(":(");
	
	
}
