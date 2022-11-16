#include <stdio.h>
#include <stdio.h>

int main(void) {
	char* str1 = "hello~ ";
	char* str2 = "I'm Suhyun";
	char str3[20]; //or malloc

	strcpy(str3, str1);
	strcat(str3, str2);
	puts(str3);
}
