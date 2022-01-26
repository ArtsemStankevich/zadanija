#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
	char skobki[6][2];
	strcpy(skobki[0], "(");
	strcpy(skobki[1], ")");
	strcpy(skobki[2], "(");
	strcpy(skobki[3], ")");
	strcpy(skobki[4], "(");
	strcpy(skobki[5], ")");
	char skobka1[2] = "(";
	char skobka2[2] = ")";
	bool answ = true;
	int ex1 = 0;
	int ex2 = 0;
	int stop = 0;
	while(stop == 0)
	{
		if(strcmp(skobki[0], skobka1)==1 && strcmp(skobki[0], skobka2)==1)
			answ = false;
		for(int i=0; i<=5; i++)
		{
			if(strcmp(skobki[i], skobka1)==0)
			{
				strcpy(skobki[i], "a");
				ex1+=1;
			}
			else if(strcmp(skobki[i], skobka2)==0)
			{
			
				strcpy(skobki[i], "a");
				ex2+=1;
			}
			else
				stop = 1;
		}
		if(strcmp(skobki[5], skobka1)==1 && strcmp(skobki[5], skobka2)==1)
			answ = false;
	}
	if(ex1 == ex2 && answ == true)
		printf("TAK");
	else 
		printf("NIE");
	
	
	
	
	
	
	
	
	
}
