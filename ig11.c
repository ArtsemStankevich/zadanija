//Отсортируй массив по возрастанию любимым методом, оцени сложность алгоритма
#include <stdio.h>

int main()
{
	int A;
	scanf("%d", &A);
	int tab[A];
	for(int i = 0; i<A; i++)
	{
		int B;
		scanf("%d", &B);
		tab[i] = B;
	}
	int ex=0;
	while(ex!=A)
	{
		for(int i=0; i<A-1; i++)
		{
			if(tab[i]>tab[i+1])
			{
				int C = tab[i+1];
				tab[i+1] = tab[i];
				tab[i] = C;
			
			}
		}
		ex++;
	}
	for(int i=0; i<A; i++)
		printf("%d", tab[i]);	
}
//sloznosc n^2
