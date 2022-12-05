#include <stdio.h>

int main(void) {
	int a1[3] = {1, 2, 3};
	int a2[3] = {10, 11, 12};
	int a3[3] = {20, 21, 22};
	int* b[3];
	int **p;

	b[0] = a1; 
	b[1] = a2; 
	b[2] = a3; 
	
	p = b;
	for(int i = 0; i<3 ; i++) {
		for(int j = 0; j<3; j++) {
			(**p) += 1;
			(*p)++;
		}
		p++;
	}
	
	printf("a1[3] = { ");
	for(int i = 0; i<3; i++) {
		printf("%d ", a1[i]);
	}
	printf("}\n");
		
	printf("a2[3] = { ");
	for(int i = 0; i<3; i++) {
		printf("%d ", a2[i]);
	}
	printf("}\n");

	printf("a3[3] = { ");
	for(int i = 0; i<3; i++) {
		printf("%d ", a3[i]);
	}
	printf("}\n");
	
}
