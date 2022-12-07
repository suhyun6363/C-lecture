#include <stdio.h>

int main(void) {
	int arr[2][4];

	for(int i = 0; i<2; i++) {
		for(int j = 0; j<4; j++) {
			arr[i][j] = 10*i+2*j;
		}
	}
	
	for(int i = 0; i<2;i++) {
		for(int j = 0; j<4; j++) {
			printf("%d ", arr[i][j]);
		}
	}
}
