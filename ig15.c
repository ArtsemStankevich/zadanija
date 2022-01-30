//Рекурсивно вычислить н-тое число каталана
#include <stdio.h>

int Cat(int n);
int main()
{
	int N=0;
	scanf("%d", &N);
	printf("%i", Cat(N-1));
}

int Cat(int n)
{
	int sum = 0;
	if(n<2)
		return 1;
	for(int k=0; k<n; k++)
		sum+=Cat(k) * Cat(n-k-1);
	return sum;
}
