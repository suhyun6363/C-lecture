#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SOFTWARE	1
#define COMPUTER_ENG	2

typedef struct _student {
	unsigned long stu_id;
	char name[20];
	int major;	//(전공)
} Student_t;

void input_info(Student_t* p) {
	char tmp[10];
	printf("input your id:");
//	scanf("%lu", &p->stu_id);	//p->stu_id는 값, &필요
	gets(tmp);
	p->stu_id = atoi(tmp);
	printf("input your name:");
	gets(p->name);	//name배열 & 필요없음
	printf("input student major (1: Software, 2: Comgong) :");
	gets(tmp); //배열이라 & 필요없음
	p->major = atoi(tmp);
}
int main(void) {
	Student_t Suhyun;
	Student_t *sh;
	sh = &Suhyun;

	input_info(sh);
	//printf("[%d] %s (%s)\n", Suhyun.stu_id, Suhyun.name, (Suhyun.major == SOFTWARE)?"SOFTWARE":"COMPUTER_ENG");
	printf("[%lu] %s (%s)\n", sh->stu_id, sh->name, (sh->major == SOFTWARE)?"SOFTWARE":"COMPUTER_ENG");

}
