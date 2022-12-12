#include <stdio.h>
#include <string.h>

char* input_string(void) {
	char* s;
	printf("input compare string: ");
	gets(s);

	return s;	
}
int main(void) {
	char *s[5] = {"Hello", "Suhyun", "22", "Student", "Korean"};
	char* str;
	
	str = input_string();

	for(int i = 0; i<5; i++) {
		if(strcmp(s[i], s) != 0)
			printf("존재하지 않습니다.탐색 불가\n");
		else
			printf("인덱스 %d입니다\n", i);
	}
}
