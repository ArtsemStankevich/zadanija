#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define MAX_STUDENT 20
#define MAX_NAME 20
#define MAX_PROF 20

typedef struct
{
	char name[MAX_NAME];
	int kurs;
	char naprav[20];
	int ocenka;
	int id;
	char pol[2];
}TStudentdata;

typedef struct
{
	char name[MAX_NAME];
	int age;
	char prof[MAX_PROF];
	
	
}TTeacherdata;

typedef struct
{
	TStudentdata student[MAX_STUDENT];
	TTeacherdata teacher[MAX_STUDENT];
	int number_of_students;
	int number_of_teacher;


}TPeoplenumber;

typedef enum
{
	ADD = 1,
	DELETE = 2,
	VIEW = 3,
	EXIT = 4
	
}TOption;

TOption menu();
void add_people(TPeoplenumber *);
bool add_teacher_to_list(TPeoplenumber *, char *, int, char*);
bool add_student_to_list(TPeoplenumber *, char *, int, char*, int, int, char *);
void delete_people(TPeoplenumber *);
bool delete_student_from_list(TPeoplenumber *, int);
bool delete_teacher_from_list(TPeoplenumber *, int);
void view_people(TPeoplenumber *);
void view_teacher_data(TTeacherdata *);
void view_student_data(TStudentdata *);
void save_people(TPeoplenumber *);
void read_people(TPeoplenumber *);
void save_to_txt(TPeoplenumber *);
void save_to_txt_teacher(TTeacherdata *);
void save_to_txt_student(TStudentdata *);

int main()
{
	TPeoplenumber people = {};
	TOption option;
	read_people(&people);
	do {
		option = menu();
		switch(option)
		{
			case ADD: add_people(&people); break;
			case DELETE: delete_people(&people); break;
			case VIEW: view_people(&people); break;
			case EXIT: save_people(&people); save_to_txt(&people); break;
						
			
			
			
			
			
			
		}
	}while(option!=EXIT);	
	
}

void save_to_txt(TPeoplenumber *people)
{
	FILE* fptr;
	if((fptr = fopen("people.txt", "wt")) == NULL)
		printf("ERROR!");
	for(int i=0; i<people->number_of_students; i++)
		save_to_txt_student(&people->student[i]);
	for(int i=0; i<people->number_of_teacher; i++)
		save_to_txt_teacher(&people->teacher[i]);
	fclose(fptr);
	
	
}

void save_to_txt_teacher(TTeacherdata *tch)
{
	FILE* fptr;
	if((fptr = fopen("people.txt", "at")) == NULL)
		printf("ERROR!");
	fprintf(fptr,"%s, %d, %s\n", tch->name, tch->age, tch->prof);
	fclose(fptr);
}

void save_to_txt_student(TStudentdata *st)
{
	FILE* fptr;
	if((fptr = fopen("people.txt", "at")) == NULL)
		printf("ERROR!");
	fprintf(fptr,"%s, %d, %s, %d, %d, %s\n", st->name, st->kurs, st->naprav, st->ocenka, st->id, st->pol);
	fclose(fptr);
}

void save_people(TPeoplenumber *people)
{
	FILE *fptr;
	if((fptr = fopen("people.bin", "wb")) == NULL)
		printf("ERROR\n");
	fwrite(people, sizeof(TPeoplenumber), 1, fptr);
	fclose(fptr);
	
}

void read_people(TPeoplenumber *people)
{
	FILE *fptr = NULL;

    if((fptr = fopen("people.bin", "rb")) == NULL) 
    {
        printf("ERROR\n");
    }
    fread(people, sizeof(TPeoplenumber), 1, fptr);
    fclose(fptr);
	
	
}

void view_people(TPeoplenumber *people)
{
	printf("print 1 to view student or print 2 to view teacher\n");
	int ex;
	scanf("%d", &ex);
	if(ex==1)
	{
		for(int i=0; i<people->number_of_students; i++)
			view_student_data(&people->student[i]);
	}
	if(ex==2)
	{
		for(int i=0; i<people->number_of_teacher; i++)
			view_teacher_data(&people->teacher[i]);	
	}
}

void view_teacher_data(TTeacherdata *tch)
{
	
	printf("%s, %d, %s\n", tch->name, tch->age, tch->prof);
}
void view_student_data(TStudentdata *st)
{
	
	printf("%s, %d, %s, %d, %d, %s\n", st->name, st->kurs, st->naprav, st->ocenka, st->id, st->pol);
}


TOption menu()
{
	printf("1.ADD\n");
	printf("2.DELETE\n");
	printf("3.VIEW\n");
	printf("4.EXIT\n");
	int op;
	scanf("%d", &op);
	return op;
}

void add_people(TPeoplenumber *people)
{
	printf("Would you like to add teacher or student?\n");
	printf("if student print 1\n");
	printf("if teacher print 2\n");
	int ex;
	scanf("%d", &ex);
	if(ex == 2)
	{
		char name[MAX_NAME];
		printf("Whats your name?\n");
		scanf("%19s", name);
		int age;
		printf("How old are you?\n");
		scanf("%d", &age);
		char prof[MAX_PROF];
		printf("Spec?\n");
		scanf("%19s", prof);
		add_teacher_to_list(people, name, age, prof);
	}
	else if(ex==1)
	{
		char name[MAX_NAME];
		printf("Whats your name?\n");
		scanf("%19s", name);
		int kurs;
		printf("Kurs?\n");
		scanf("%d", &kurs);
		char naprav[20];
		printf("Napraw?\n");
		scanf("%19s",naprav);
		int ocenka;
		printf("Ocenka?\n");
		scanf("%d", &ocenka);
		int id;
		printf("id?\n");
		scanf("%d", &id);
		char pol[2];
		printf("pol?\n");
		scanf("%1s", pol);
		add_student_to_list(people, name, kurs, naprav, ocenka, id, pol);
		
		
		
	}
}

bool add_student_to_list(TPeoplenumber *people, char *name, int kurs, char* naprav, int ocenka, int id, char *pol)
{
	
	TStudentdata st;
	st.kurs = kurs;
	st.ocenka = ocenka;
	st.id = id;
	strcpy(st.name, name);
	strcpy(st.naprav, naprav);
	strcpy(st.pol, pol);
	if(people->number_of_students == MAX_STUDENT)
		return false;
	people->student[people->number_of_students] = st;
	people->number_of_students++;
	return true;
}

bool add_teacher_to_list(TPeoplenumber *people, char *name, int age, char *prof)
{
	TTeacherdata tch;
	tch.age = age;
	strcpy(tch.name, name);
	strcpy(tch.prof, prof);
	if(people->number_of_teacher == MAX_STUDENT)
		return false;
	people->teacher[people->number_of_teacher] = tch;
	people->number_of_teacher++;
}

void delete_people(TPeoplenumber *people)
{
	printf("Would you like to delete student or teacher\n");
	printf("if student print 2\n");
	printf("if teacher print 1\n");
	int ex;
	scanf("%d", &ex);
	if(ex==2)
	{
		int op;
		printf("print number of student\n");
		scanf("%d", &op);
		delete_student_from_list(people, op);
		
		
	}
	else if(ex==1)
	{
		int op;
		printf("print number of teacher\n");
		scanf("%d", &op);
		delete_teacher_from_list(people, op);	
	}
}


bool delete_student_from_list(TPeoplenumber *people, int op)
{
	op--;
	for(int i=op; i<people->number_of_students; i++)
	{
		people->student[i]=people->student[i+1];
	}
	people->number_of_students--;
}

bool delete_teacher_from_list(TPeoplenumber *people, int op)
{
	op--;
	for(int i=op; i<people->number_of_teacher; i++)
		people->teacher[i]=people->teacher[i+1];
	people->number_of_teacher--;
}




















