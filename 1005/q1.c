#include <stdio.h>
int main(void) {
	int arr[5];
	int *p;
	int len = sizeof(arr) / sizeof(int);
	p = arr;
	for(int i = 0; i < len;i++) {
		*p = i+1;
		*p++;
	}
	for(int i = 0; i < len;i++)
		printf("%d ", arr[i]);
}
