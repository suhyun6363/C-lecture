#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SOFTWARE	1
#define COMPUTER_ENG	2

typedef unsigned long score_t;

typedef struct _grade {
	score_t CnLinux;
	score_t python;
	score_t comnet;
} Grade_t;

typedef struct _student {
	unsigned long stu_id;
	char name[20];
	int major;	//(전공)
	Grade_t* score;
} Student_t;

/*
void input_info(Student_t* p) {
	char tmp[10];
	printf("Input your id: ");
//	scanf("%lu", &p->stu_id);	//p->stu_id는 값, &필요
	gets(tmp);
	p->stu_id = atoi(tmp); //atoi(gets(tmp)) //안에 함수가 return이 void라면 함수 사용할 수 없음
	printf("Input your name: ");
	gets(p->name);	//name배열 & 필요없음
	printf("Input student major (1: Software, 2: Comgong) : ");
	gets(tmp); //배열이라 & 필요없음
	p->major = atoi(tmp); //atoi(gets(tmp))
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
*/

int main(void) {
	Student_t studentArray[5];
	Grade_t grade[5];
	Student_t* p;


	
	/*
	input_info(&student);
	//printf("[%d] %s (%s)\n", Suhyun.stu_id, Suhyun.name, (Suhyun.major == SOFTWARE)?"SOFTWARE":"COMPUTER_ENG");
	printf("[%lu] %s (%s)\n", student.stu_id, student.name, (student.major == SOFTWARE)?"SOFTWARE":"COMPUTER_ENG");
	printf("CnLinux: %lu\npython: %lu\nComNet: %lu\n", student.score.CnLinux, student.score.python, student.score.comnet);
	*/

	p = studentArray;
	
	for(int i = 0; i<5; i++) {
		p->score = &grade[i];
		p++;
		p->score++;
	}
	
	p = studentArray;
	p->score = grade;
	for(int i = 0; i<5; i++) {
		p->score->CnLinux = 0;
		p->score->python = 0;
		p->score->comnet = 0;
		p++;

	}
	
	for(int i = 0 ; i<5; i++) {
		printf("student[%d]\n", i+1);
		printf("CnLinux: %lu\n", studentArray[i].score->CnLinux);
		printf("python: %lu\n", studentArray[i].score->python);
		printf("comnet: %lu\n", studentArray[i].score->comnet);
		printf("\n");
	}
}
