#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	char *s1 = "Hello";
	char s2[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
	char *s3 = (char*)malloc(100);
	int compare = 1;

	strncpy(s3, s1, 100); //100byte 넘지 않으면 s1만큼 문자열 복사
	puts(s3);
	compare = strncmp(s3, s2, 100);
	printf("compare = %d\n", compare);
}
