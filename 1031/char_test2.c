#include <stdio.h>
int main(void) {
	char str1[8] = {'H', 'E', 'L','L','O'};
	char str2[8] = "HELlO";
	char str3[] = "Hello";
	char* str4 = "Hello!";
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str3);
	printf("%s\n", str4);

}
