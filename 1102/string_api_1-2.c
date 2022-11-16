#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char str1[100];
	char* ms;
	ms = "문자열을 입력하세요.";
	puts(ms);
	gets(str1);

	char* str2;
	str2 = (char*)malloc(100000);
	puts(ms);
	gets(str2);
	
	ms = "당신이 입력한 문자열은....";
	puts(ms);
	printf("str1: %s\nstr2: %s\n", str1, str2);
	free(str2);
}
