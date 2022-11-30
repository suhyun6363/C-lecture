#include <stdio.h>

int main(void) {
	int a[3] = {1, 2, 3};
	int* b[3];
	int **p;

	p = b;

	for(int i = 0; i<3; i++) {
		b[i] = &a[i];
	}
	for(int i = 0; i<3; i++) {
		**p += 1;
		p++;
	}
	p = b;

	for(int i = 0; i<3 ;i++) {
		//printf("%d ", a[i]);
		printf("%d ", **p++);

	}
}
