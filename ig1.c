//1. Найди максимальный и минимальный элемент массива
//2. Найди минимальный , второй минимальный, третий максимальный элемент массива
#include <stdio.h>
#include <limits.h>
int main()
{
	int A;
	scanf("%d", &A);
	int tab[A];
	int min = INT_MAX;
	int submin = INT_MAX;
	int maks = 0;
	int submaks = 0;
	int subsubmaks = 0;
	for(int i=0; i<=A; i++)
	{
		int d;
		scanf("%d", &d);
		tab[i] = d;	
	}
	for(int i=0; i<=A; i++)
	{
		if(tab[i]>maks)
		{
			
			if(tab[i] != submaks)
			{
				subsubmaks = submaks;
				submaks = maks;
				maks = tab[i];
			}
		}
		if(tab[i]<min)
		{
			if(tab[i] != submin)
			{
				submin = min;
				min = tab[i];
			}
		}	
		if(tab[i]<maks && tab[i]>submaks)
			submaks = tab[i];
		if(tab[i]<maks && tab[i] < submaks && tab[i] > subsubmaks)
			subsubmaks = tab[i];
		if(tab[i]>min && tab[i]<submin)
			submin = tab[i];
	}
	printf("%d", min);
	printf("%d", submin);
	printf("%d", subsubmaks);
	printf("%d", submaks);
	printf("%d", maks);
}
