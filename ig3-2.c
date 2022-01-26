#include <stdio.h>

int main()
{
	int tab[10] = {1,-1, 0, 2, -15, 0, 0, 0, 67, -4};
	for(int i=0; i<10; i++)
	{
		if(tab[i]>0)
			tab[i]=1;
		else if(tab[i]<0)
			tab[i]=-1;
		else if(tab[i]=0)
			tab[i]=0;
		
	}
	for(int i=0; i<10; i++)
		printf("%d\n", tab[i]);
	
	
	
	
	
	
	
}
