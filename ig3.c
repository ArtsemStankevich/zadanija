#include <stdio.h>

int main()
{
	int tab1[20], tab2[20], tab3[20], tab4[3][20];
	for(int i=0; i<=10; i++)
	{
		tab1[i] = i;
		tab4[0][i] = i;
		printf("first-%d\n", tab4[0][i]);
	}
	for(int i=0; i<=10; i++)
	{
		tab2[i] = i;
		tab4[1][i] = i;
		printf("second-%d\n", tab4[1][i]);
	}
	
	for(int i=0; i<=10; i++)
	{
		tab3[i] = tab1[i]*tab2[i];
		tab4[2][i] = tab3[i];
		printf("first*second-%d\n", tab4[2][i]);
	}
	
	
	
	
	
	
	
}

