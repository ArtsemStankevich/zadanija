#include <stdio.h>
#include <limits.h>
int main()
{
	int A;
	scanf("%d", &A);
	int tab[A];
	int min = INT_MAX;
	int maks = 0;
	int submaks = 0;
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
				submaks = maks;
				maks = tab[i];
		}
		if(tab[i]<=min)
			min = tab[i];
		if(tab[i]<maks && tab[i]>submaks)
			submaks = tab[i];
		
		
	}
	printf("%d", min);
	printf("%d", maks);
	printf("%d", submaks);

	
	
	
	
	
}
