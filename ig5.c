#include <stdio.h>
int Fib(int n);
int main()
{
	int tab[10];
	for(int i=0; i<10; i++)
		tab[i] = 0;
	int liczba=1;
	int stop = 0;
	while(stop != 1)
	{
		printf("Podaj liczbe:");
		int liczba;
		scanf("%d", &liczba);
		tab[liczba] = Fib(liczba);
		printf("%d\n", tab[liczba]);
		scanf("%d", &stop);
		
	
	
	
	}
	for(int i=0; i<10; i++)
		printf("%d\n", tab[i]);
	
}

int Fib(int n)
{
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	return Fib(n-1)+Fib(n-2);
	
	
}
