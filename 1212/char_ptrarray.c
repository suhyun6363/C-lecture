#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void input_string(char* s) {
	printf("input compare string: ");
	gets(s);

}
int main(void) {
	char *s[5] = {"Hello", "Suhyun", "22", "Student", "Korean"};
	char* str;
	int index;
	
	str = (char*)malloc(sizeof(char*)); //중요!!!
	input_string(str);

	for(int i = 0; i<5; i++) {
		if(strcmp(s[i], str) != 0)
			index = -1;
		else {
			index = i;
			break;
		}
	}

	if(index != -1)
		printf("탐색 성공! 인덱스 %d입니다.\n", index);
	else
		printf("탐색 실패! 값이 존재하지 않습니다.\n");
	
	free(str);
}
