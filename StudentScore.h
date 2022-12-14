#include <stdio.h>
#define STU_NUM	5

typedef struct _score
{	
	int CnLinux;
	int Algorithm;
	int python;
} Score_t;

typedef struct _student
{
	char name[20];
	char major[10];
	int id;
	Score_t grade;
} Student_t;


