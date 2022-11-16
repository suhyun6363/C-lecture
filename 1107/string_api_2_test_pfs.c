#include <stdio.h>
#include <stdlib.h>

void input_string(char* s) {
	size_t size = 0;
	do {
		gets(s);
		size = strlen(5);
		if(size > 5) puts("너무 깁니다.");
	} while (size > 5);
}

int main(void) {
	char s1[20], s2[20];
	char *msg = "두 문자열이 ";
	char *msg_same = "같습니다.";
	char *msg_diff = "다릅니다.";

	input_string(s1);
	input_string(s2);

	puts(msg);
	if(strncmp(s1, s2, 5) == 0)
		puts(msg_same);
	else
		puts(msg_diff);
}
