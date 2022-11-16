#include <stdio.h>
int main(void) {
	char k;
	int n;

	k = 'A';
	printf("k = %c\n", k);
	k = 66;
	printf("k = %c\n", k);
	n = 67;
	printf("n = %c\n", n);
	printf("n = %d\n", n);
	
	n = 'A' + 1;
	printf("n = %d  %c\n", n, n);

	n = 16;
	printf("n = %d  %c\n", n, n);
}
