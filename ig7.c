// Вычислить н число каталана.

#include <stdio.h>
#define MAX_ARR 25

int Data[MAX_ARR];

int Catalan(int n);

int main()
{
	int N;
	scanf("%d", &N);
	for(int i=0; i<N; i++)
		Data[i] = Catalan(i);
	printf("%i", Catalan(N-1));
}

int Catalan(int n)
{
	int k;
	int s = 0;
	if(n<0)
		return 0;
	if(n<2)
		return 1;
	
	for(int k=0; k<n; k++)
		s+=Data[k] * Data[n-1-k];
	return s;
}
