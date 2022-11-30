//배열포인터들을 student 구조체에 연결 후 점수 입출력
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SOFTWARE	1
#define COMPUTER_ENG	2
#define STU_NUM		4

typedef unsigned long score_t;

typedef struct _grade {
	score_t CnLinux;
	score_t python;
	score_t comnet;
} Grade_t;

typedef struct _student {
	int stu_id;
	char name[20];
	char major[10];
	Grade_t score;
} Student_t;

void input_inform(Student_t **p) {
	char tmp[10];

	for(int i = 0;i<STU_NUM; i++) {
		printf("Student[%d]\n", i);
		printf("Input student ID: ");
		gets(tmp);
		(*p)->stu_id = atoi(tmp);

		printf("Input student name: ");
		gets(tmp);
		strncpy((*p)->name, tmp, sizeof(tmp));
		//(*p)->name = tmp;
	
		printf("Input student major num (1: Software, 2: Comgong) : ");
		gets(tmp);
		if(atoi(tmp) == 1) {
			strcpy((*p)->major, "Software");
		}
		else
			strcpy((*p)->major, "Comgong");

		printf("Input student scor\n");
		printf(" - CnLinux: ");
		gets(tmp);
		(*p)->score.CnLinux = atoi(tmp);
		printf(" - python: ");
		gets(tmp);
		(*p)->score.python = atoi(tmp);
		printf(" - comnet: ");
		gets(tmp);
		(*p)->score.comnet = atoi(tmp);
		
		printf("\n");
		p++;
	}
}

int main(void) {
	Student_t* stu_list[STU_NUM];
	
	for(int i =0; i<STU_NUM; i++) {
		stu_list[i] = (Student_t*)malloc(sizeof(Student_t));
	}
	
	input_inform(stu_list);

	for(int i = 0; i<STU_NUM; i++) {
		printf("Student[%d]\n" , i);
		printf("ID: %d\n", stu_list[i]->stu_id);
		printf("name: %s\n", stu_list[i]->name);
		printf("major: %s\n", stu_list[i]->major);
		printf("CnLinux: %lu\n", stu_list[i]->score.CnLinux);
		printf("python: %lu\n", stu_list[i]->score.python);
		printf("comnet: %lu\n", stu_list[i]->score.comnet);
		printf("\n");
	}
	for(int i = 0; i<STU_NUM; i++) {
		free(stu_list[i]);
	}
}

