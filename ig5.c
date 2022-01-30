//Вычислить н чисел Фибоначчи, использовать массив для хранения уже вычесленных значений. 
#include <stdio.h>

int Fib(int n);

int main()
{
	int tab[20];
	int stop=0;
	for(int i=0; i<10; i++)
		tab[i] = 0;
	while(stop==0)
	{
		int A;
		scanf("%d", &A);
		if(A!=-1)
		{
			tab[A] = Fib(A);
		}
		else
			stop=1;
	}
	for(int i=0; i<10; i++)
		printf("%d\n", tab[i]);
}

int Fib(int n)
{
	if(n==0)
		return 1;
	if(n==1)
		return 1;
	return Fib(n-1)+Fib(n-2);
}
