#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "StudentScore.h"

void input_info(Student_t** p, int n)
{
	char tmp[20];

	printf("---- Student[%d]----\n", n);
	printf("Input student's name: ");
	gets((*p)->name);

	printf("Input student's major: ");
	gets((*p)->major);

	printf("Input student's id: ");
	gets(tmp);
	(*p)->id = atoi(tmp);

	printf("Input student's score\n");
	printf(" - CnLinux: ");
	gets(tmp);
	(*p)->grade.CnLinux = atoi(tmp);
	printf(" - Algorithm: ");
	gets(tmp);
	(*p)->grade.Algorithm = atoi(tmp);
	printf(" - Python: ");
	gets(tmp);
	(*p)->grade.python = atoi(tmp);
}

int search_info(char** nl, char* s) {
	int index;

	for(int i=0; i<STU_NUM; i++) 
	{
		if(strcmp((*nl), s) != 0)
			index = -1;
		else 
		{
			index = i;		
			break;
		}
	}
	return index;
}

int main(void) {
	Student_t* stu_list[STU_NUM];
	char* name_list[STU_NUM];
	Student_t** p;
	char* q;
	char search_s[20];
	int idx;

	for(int i = 0; i<STU_NUM; i++)
	{
		stu_list[i] = (Student_t*)malloc(sizeof(Student_t));
		input_info(&stu_list[i], i);
			
	}

	p = stu_list;
	for(int i=0; i<STU_NUM; i++)
	{
		name_list[i] = (*p)->name;
		(*p)++;
	}

	q = name_list;
	for(int i=0; i<STU_NUM; i++) {
		printf("%s ", (*q)++);
	}
	/*
	printf("\nsearch name: ");
	gets(search_s);
	idx = search_info(name_list, search_s);
	
	if(idx != 1)
		printf("index: %d\n", idx);
	else
		printf("값이 존재하지 않습니다.\n");
	*/
}

