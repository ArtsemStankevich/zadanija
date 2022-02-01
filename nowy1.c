//сортируй массив по возврастанию
#include <stdio.h>

#define ARRAY 5

int main()
{
	int tab[ARRAY] = {2, 5, 5, 1, 3};
	for(int i=0; i<ARRAY; i++)
	{
		for(int j=0; j<ARRAY-1; j++)
		{
			if(tab[j]>tab[j+1])
			{
				int A = tab[j+1];
				tab[j+1] = tab[j];
				tab[j] = A;
			}	
		}	
	}
	for(int i=0; i<ARRAY; i++)
		printf("%d", tab[i]);
	return 0;
}
