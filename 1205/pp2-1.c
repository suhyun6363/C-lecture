#include <stdio.h>
#define NUM	3
//Q2
int main(void) {
	int a1[NUM] = {1, 2, 3};
	int a2[NUM] = {10, 11, 12};
	int a3[NUM] = {20, 21, 22};
	int* b[NUM];
	int **p;

	b[0] = a1; 
	b[1] = a2; 
	b[2] = a3; 
	
	p = b;
	for(int i = 0; i<NUM ; i++) {
		for(int j = 0; j<NUM; j++) {
			(**p) += 1;
			(*p)++;
		}
		p++;
	}

	p = b;
	b[0] = a1; 
	b[1] = a2; 
	b[2] = a3; 
/*		
	printf("a1[3] = { ");
	for(int i = 0; i<NUM; i++) {
		printf("%d ", **p);
		(*p)++;
	}
	printf("}\n");

	p++;	
	printf("a2[3] = { ");
	for(int i = 0; i<NUM; i++) {
		printf("%d ", **p);
		(*p)++;
	}
	printf("}\n");
	
	p++;
	printf("a3[3] = { ");
	for(int i = 0; i<NUM; i++) {
		printf("%d ", **p);
		(*p)++;
	}
	printf("}\n");
*/
	for(int i = 0; i<NUM; i++) {
		printf("a%d[] : ", i+1);
		for(int j = 0; j<NUM; j++) {
			printf("%d ", **p);
			(*p)++;
		}
		printf("\n");
	}	
}
