//Дана скобочная последовательность ((5(6))) - правильная, ((5(6) - не правильно. 
//Твоя программа принимает на вход последовательность и возвращает правильная последовательность дана или нет. 
//Примеры:
//5()(6) - не прав
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define ARRAY 6

int main()
{
	char skobki[ARRAY][2];
	for(int i=0; i<ARRAY; i++)
	{
		char arr[2];
		scanf("%s", arr);
		strcpy(skobki[i], arr);
	}
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
		for(int i=0; i<6; i++)
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
	printf("%d", ex1);
	if(ex1 == ex2 && answ == true)
		printf("TAK");
	else 
		printf("NIE");
	
}
