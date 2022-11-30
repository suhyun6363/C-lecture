#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define	STU_NUM	4
#define	SW	1
#define	COM	2
#define	CYBER	3

typedef struct _grade
{
	int	CnLinux;
	int	python;
	int	comnet;
} Grade_t;

typedef struct _student
{
	unsigned long 	stu_ID;
	char 		name[100];
	int 		major;

	Grade_t		score;
} Student_t;
