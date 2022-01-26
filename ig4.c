//Сделай структуру для хранения колоды карт.также функции которые будут записывать и читать колоду карт из Бин файла.
// Напиши функцию которая принимает карту и возвращает массив карт который бьёт данную карту - ja nie jebu kak.
#include <stdio.h>
#define MAX_KARTS 54
typedef struct
{
	int wartosc;
	char kolor[2];
	
	
}TKarta;
typedef struct 
{
	TKarta ilosc[MAX_KARTS];
	
	
}TIlosc;
void zapis(TIlosc *);
void czytam(TIlosc *);
void view_karts(TIlosc *);
void view_data_of_karts(TKarta *);
int main()
{
	TIlosc karta = {};
	TKarta a = {6, "C"};
	karta.ilosc[0] = a;
//	TKarta b = {7, "D"};
	//karta.ilosc[1] = b;
	//TKarta c = {8, "A"};
	//karta.ilosc[2] = c;
  	//zapis(&karta);
    czytam(&karta);
	view_karts(&karta);
	
	
	
	
	
	
	
}

void zapis(TIlosc *kart)
{
	FILE* fptr;
	if ((fptr = fopen("karta.bin", "wb")) == NULL)
		printf("ERROR");
	fwrite(kart, sizeof(TIlosc), 1, fptr);
	fclose(fptr);
		
	
	
	
	
}

void czytam(TIlosc *kart)
{
	FILE* fptr;
	if((fptr = fopen("karta.bin", "rb")) == NULL)
		printf("ERROR");
	fread(kart, sizeof(TIlosc), 1, fptr);
	fclose(fptr);

	
}
void view_karts(TIlosc *kart)
{
	for (int i=0; i<3; i++)
		view_data_of_karts(&kart->ilosc[i]);
}
void view_data_of_karts(TKarta *kar)
{
	printf("%d, %s\n", kar->wartosc, kar->kolor);
}


