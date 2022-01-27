//Дан список сторон, минимум 6, можно ли сделать из этого кирпич? Сколько можно сделать кирпичей из этого массива?
#include <stdio.h>

int main()
{
	int tab[15] = {12, 17, 12, 24, 18, 18, 24, 5, 35, 35, 5, 17, 1, 2, 3};
		int ex = 0;
	for(int i = 0; i<15; i++)
	{
		for(int j = i; j<15; j++)
		{
			if(tab[i] == tab[j+1] && tab[i]!=0 && tab[j]!=0)
			{
				printf("%d, %d\n", tab[i], tab[j+1]); 
				tab[i] = 0;
				tab[j+1] = 0;
				ex++;
			}
		}
	}
	for(int i=0; i<15; i++)
	{
		printf("--%d\n", tab[i]);
	}
	if(ex>=3)
		printf("Tak, mozna\n");
	int kirpich = (ex-ex%3)/3;
	printf("%d kirpicha", kirpich);
}
