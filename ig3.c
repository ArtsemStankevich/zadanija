//Умнож массив на второй массив и запиши это в массиве из трёх измерений, где первый массив это первый массив, второй - второй, третий - результат умножения


#include <stdio.h>
#define MAX_ARR 20;
#define NUMBER_OF_ARRAY 3;
int main()
{
	int tab1[MAX_ARR ], tab2[MAX_ARR ], tab3[MAX_ARR ], tab4[NUMBER_OF_ARRAY][MAX_ARR ];
	for(int i=0; i<=10; i++)
	{
		tab1[i] = i;
		tab4[0][i] = i;
		printf("first-%d\n", tab4[0][i]);
	}
	for(int i=0; i<=10; i++)
	{
		tab2[i] = i;
		tab4[1][i] = i;
		printf("second-%d\n", tab4[1][i]);
	}
	for(int i=0; i<=10; i++)
	{
		tab3[i] = tab1[i]*tab2[i];
		tab4[2][i] = tab3[i];
		printf("first*second-%d\n", tab4[2][i]);
	}
}

