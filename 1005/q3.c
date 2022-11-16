#include <stdio.h>
int main(void) {
	int arr1[5] = {10, 20, 30, 40, 50};
	int arr2[5];
	int *p1, *p2;
	int len = sizeof(arr1) / sizeof(int);
	p1 = arr1;
	p2 = &arr2[4];

	for(int i = 0 ; i<len;i++) {
		*p2-- = *p1++;  
	}
	for(int i = 0 ; i<len ; i++) {
		printf("%d ", arr2[i]);
	}
}
