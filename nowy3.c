//Дан посортированный массив из задания 1, найди в нем число н
#include <stdio.h>
#include <stdbool.h>

#define ARRAY 5

int main()
{
	int tab[ARRAY] = {1, 2, 3, 5, 5};
	int n;
	int ex;
	bool answ = false;
	scanf("%d", &n);
	for(int i=0; i<ARRAY; i++)
	{
		if(tab[i]==n && answ!=true)
		{
			ex = i;
			answ = true;
		}
		
	}
	if(answ==false)
		printf("not in this array");
	else
		printf("%d", ex);
	
	
}
