//Student_t 안에 Grade_t형 구조체 score 문제

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SOFTWARE		1
#define COMPUTER_ENG		2
#define STUDENT_NUM		5

typedef unsigned long score_t;

typedef struct _grade
{
	score_t CnLinux;
	score_t python;
	score_t comnet;
} Grade_t;

typedef struct _student
{
	unsigned long stu_id;
	char name[20];
	char* major;	//(전공)
	Grade_t score;
} Student_t;

void input_info(Student_t* p)
{
	char tmp[10];
	printf("Input your id: ");
	gets(tmp);
	p->stu_id = atoi(tmp); 
						
	printf("Input your name: ");
	gets(p->name);	
								
	printf("Input student major num (1: Software, 2: Comgong) : ");
	gets(tmp);
	if(atoi(tmp) == 1)
		p->major = "Software"; 
	else
		p->major = "Comgong"; 
	
	printf("Input your score\n");
	printf("\tCnLinux: ");
	gets(tmp);
	p->score.CnLinux = atoi(tmp);
	printf("\tpython: ");										
	gets(tmp);
	p->score.python = atoi(tmp);					
	printf("\tcomputer network: ");								
	gets(tmp);
	p->score.comnet = atoi(tmp);
}

int main(void)
{
	Student_t* ptr[STUDENT_NUM];
	Student_t student;
	
	
	student = (Student_t)malloc(sizeof(STUDENT_NUM));

	for(int i = 0; i<STUDENT_NUM; i++) 
	{
		ptr[i] = &student[i];

	}
					
	for(int i = 0; i<STUDENT_NUM; i++)
	{
		printf("student[%d]\n", i+1);
		input_info(&ptr[i]);
		printf("\n");
	}
	
	
	for(int i = 0 ; i<5; i++) 
	{
		printf("student[%d]\n", i+1);
		printf("student's name: %s\n", student[i].name);
		printf("student's major: %s\n", student[i].major);
		printf("CnLinux: %lu\n", student[i].score.CnLinux);
		printf("python: %lu\n", student[i].score.python);
		printf("comnet: %lu\n", student[i].score.comnet);
		printf("\n");
	}
	
}
