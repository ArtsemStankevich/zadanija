//Отсортируй массив по возрастанию любимым методом, оцени сложность алгоритма
#include <stdio.h>

int main()
{
	int main_array;
	int maks=0;
	scanf("%d", &main_array);
	int tab[main_array];
	int sorttab[main_array];
	int sort_array = main_array;
	int ex = 0;
	for(int i=0; i<=main_array; i++)
	{
		int op;
		scanf("%d", &op);
		tab[i] = op;	
	}
	for(int j=main_array; j>=0; j--)
	{
		maks = 0;
		for(int i=0; i<=sort_array; i++)
			{
				if(tab[i]>maks)
				{
					maks = tab[i];
					ex = i;
				}
			}
		sorttab[j] = maks;
		for(int i = ex; i<=sort_array; i++)
			tab[i] = tab[i+1];
		sort_array--;
	}	
	for(int i=0; i<=main_array; i++)
	{
			printf("%d", sorttab[i]);
	}
}
//sloznosc=n^2 + 2n
