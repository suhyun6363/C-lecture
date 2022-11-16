#include <stdio.h>
#include <string.h>
#define SOFTWARE	1
#define COMPUTER_ENG	2

typedef struct _student {
	unsigned long stu_id;
	char name[20];
	int major;	//(전공)
} Student_t;

int main(void) {
	Student_t Suhyun;
	Student_t *sh;
	sh = &Suhyun;
	Suhyun.stu_id = 20210779;
	strncpy(Suhyun.name, "Suhyun", sizeof("Suhyun"));
	Suhyun.major = SOFTWARE;

	//printf("[%d] %s (%s)\n", Suhyun.stu_id, Suhyun.name, (Suhyun.major == SOFTWARE)?"SOFTWARE":"COMPUTER_ENG");
	printf("[%d] %s (%s)\n", sh->stu_id, sh->name, (sh->major == SOFTWARE)?"SOFTWARE":"COMPUTER_ENG");
}
