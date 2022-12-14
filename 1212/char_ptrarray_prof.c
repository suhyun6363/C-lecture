#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define FAIL	-1
int input_string(char** p) {
	char tmp[20];

	printf("input compare string: ");
	gets(tmp);

	for(int i = 0; i<5; i++, p++) { //p++ 확인!
		if(strcmp(*p, tmp) == 0)
			return i;
	}
	return FAIL;
}
int main(void) {
	char *s[5] = {"Hello", "Suhyun", "22", "Student", "Korean"};
	int index;
	
	index = input_string(s);

	if(index != FAIL)
		printf("탐색 성공! 인덱스 %d입니다.\n", index);
	else
		printf("탐색 실패! 문자열이 존재하지 않습니다.\n");
}
