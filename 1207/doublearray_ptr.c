#include <stdio.h>
//ver2 pp이용
int main(void) {
	int arr[3][4];
	int * p[3];
	int **pp;

	for(int i=0; i<3; i++) {
		p[i] = arr[i];
	}
	pp = p;

	for(int j = 0;j<3;j++) {
		for(int i=0;i<4;i++) {
			(**pp) = 10*j + i;
			(*pp)++;
		}
		pp++;
	}
	/*
	pp = p;
	for(int i=0; i<3; i++) {
		p[i] = arr[i];
	}
*/
	for(int j = 0;j<3;j++) {
		for(int i=0;i<4;i++) {
			printf("%d ", arr[j][i]);
	//		(*pp)++;
		}
	//	pp++;
	}
	
}
