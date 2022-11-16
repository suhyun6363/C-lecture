#include <stdio.h>
int main(void) {
	char str[30];
	sprintf(str, "Numeber %d\n", 9);
	puts(str);

	sprintf(str, "Name is %s\n", "Suhyun");
	printf("%s", str);
}
