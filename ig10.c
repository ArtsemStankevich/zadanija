// Запиши в файл тхт структуру, которая содержит список планет, а каждая планета содержит какие либо поля. Поля придумай сам
#include <stdio.h>
#include <string.h>

#define NAME_OF_PLANET 10
typedef struct
{
	char name[NAME_OF_PLANET];
	int mass;
	int rad;
	float km;
	
}TPlanet;

int main()
{
	TPlanet list_of_planet[3] = {{"Earth", 30000, 250, 0}, {"Mars", 45000, 150, 306.87}, {"Upiter", 12500, 410, 1478.56}};
	
	FILE *fptr;
	if ((fptr = fopen("planet.txt", "wt")) == NULL)
		printf("ERROR!");
	for(int i=0; i<3; i++)
		fprintf(fptr, "%s, %d, %d, %f\n", list_of_planet[i].name, list_of_planet[i].mass, list_of_planet[i].rad, list_of_planet[i].km);
	fclose(fptr);
}
