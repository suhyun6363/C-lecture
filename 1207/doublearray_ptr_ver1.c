#include <stdio.h>
//ver1 p이용
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
			*p[j] = 10*j + i;
			p[j]++;
		}
	}
	
	for(int j = 0;j<3;j++) {
		for(int i=0;i<4;i++) {
			printf("%d ", arr[j][i]);
		}
	}
	
}
