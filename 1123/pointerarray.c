#include <stdio.h>
#define NUM	5
int main(void) {
	int* src[NUM];
	int value[NUM];
	
	printf("#1\n");
	for(int i = 0; i<NUM ; i++) {
		src[i] = &value[i];
		*src[i] = i+1;
	}
	for(int i = 0; i<NUM; i++) {
		printf("%d ", value[i]);
	}
	printf("\n");

	printf("#2\n");
	for(int i = 0; i<NUM ; i++) {
		*src[i] = (*src[i] * 2); //*src[i] *= 2
	}
	for(int i = 0; i<NUM; i++) {
		printf("%d ", value[i]);
	}
	printf("\n");

	
}
