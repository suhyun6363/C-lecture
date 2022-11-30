#include "pointer_arr.h"

void create_list(Student_t **p)
{
	for(int i=0 ; i<STU_NUM ; i++)
		*p++ = (Student_t *)malloc(sizeof(Student_t));
}
void input_inform(Student_t **p)
{
	char tmp[100];
	for(int i=0 ; i<STU_NUM ; i++)
	{
		printf("##### Student %d #####\n", i);
		printf("Student ID : ");
		gets(tmp);
		(*p)->stu_ID = (unsigned long)atoi(tmp);
		printf("Name : ");
		gets(tmp);
		strncpy((*p)->name, tmp, sizeof(tmp));
		printf("Major (SW:1, Computer Eng.:2, Cyber Security:3) : ");
		gets(tmp);
		(*p)->major = atoi(tmp);

		puts("Input your scores ...");
		printf("CnLinux : ");
		gets(tmp);
		(*p)->score.CnLinux = atoi(tmp);
		printf("python : ");
		gets(tmp);
		(*p)->score.python = atoi(tmp);
		printf("Computer Networks : ");
		gets(tmp);
		(*p)->score.comnet = atoi(tmp);
		puts("");
		p++;
	}
}

int main(void)
{
	Student_t *student_list[STU_NUM];
	create_list(student_list);
	input_inform(student_list);

	for(int i = 0 ; i<STU_NUM ; i++)
	{
		printf("##### Student %d #####\n", i);
		printf("ID : %ld\n", student_list[i]->stu_ID);
		printf("name : %s\n", student_list[i]->name);
		printf("major : %s\n", (student_list[i]->major == SW)?
				"Software":((student_list[i]->major == COM)?
				"Computer Eng.":"Cyber Security"));
		printf("CnLinux : %d\n", student_list[i]->score.CnLinux);
		printf("python : %d\n", student_list[i]->score.python);
		printf("comnet : %d\n", student_list[i]->score.comnet);
		puts("");
	}
	for(int i=0 ; i<STU_NUM ; i++)
		free(student_list[i]);

}
