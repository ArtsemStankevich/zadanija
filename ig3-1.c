//Смести все элементы массива на один влево, вправо, в два элемента вправо.
#include <stdio.h>

int main()
{
	int tab[20];
	for(int i=0; i<10; i++)
	{
		tab[i] = i;
		printf("first-%d\n", tab[i]);
	}
	for(int i=0; i<10; i++)
	{
		tab[i-1] = i;
		
		
	}
	tab[9] = 0;
	for(int i=0; i<10; i++)
	{
		printf("left-%d\n", tab[i]);
		
		
	}
	for(int i=0; i<10; i++)
	{
		tab[i+1] = i;
		
		
	}
	tab[0] = 0;
	for(int i=0; i<10; i++)
	{
		printf("right-%d\n", tab[i]);
		
		
	}
	
	
	for(int i=0; i<10; i++)
	{
		tab[i+2] = i;
		
		
	}
	tab[0] = 0;
	tab[1] = 0;
	for(int i=0; i<10; i++)
	{
		printf("2right-%d\n", tab[i]);
	}
	

	
	
	
}
