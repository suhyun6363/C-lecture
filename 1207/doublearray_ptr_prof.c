#include <stdio.h>
//ver1 p이용
int main(void) {
	int arr[3][4];
	int * p[3];
	int **pp;
	
	printf("ver1: ");
	for(int i=0; i<3; i++) {
		p[i] = arr[i];
	}
	pp = p;

	for(int j = 0;j<3;j++) {
		for(int i=0;i<4;i++) {
			*p[j] = 10*j + i;
			p[j]++;
		}
	}
	
	for(int j = 0;j<3;j++) {
		for(int i=0;i<4;i++) {
			printf("%d ", arr[j][i]);
		}
	}
	printf("\n");

	//ver2 pp이용
	printf("ver2: ");
	for(int i=0; i<3; i++) {
		p[i] = arr[i];
	}

	for(int i=0; i<3;i++) {
		for(int j=0;j<4;j++) {
			(**p) = 10*i + j;
			(*pp)++;
		}
		pp++;
	}
	
	for(int j = 0;j<3;j++) {
		for(int i=0;i<4;i++) {
			printf("%d ", arr[j][i]);
		}
	}
}
