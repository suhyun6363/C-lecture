#include <stdio.h> //arr1-> arr2 데이터 복사
void mem_copy(void *src, void *dst,int num, int unit) {
	for(int i = 0; i<num; i++) {
		if(unit == sizeof(char)) *(char *)dst++ = *(char *)src++;
		else if(unit == sizeof(short)) *(short *)dst++ = *(short *)src++;
		else if(unit == sizeof(int)) *(int *)dst++ = *(int *)src++;
		else if ...
	}
}

int main(void) {
	int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int arr2[10];
	mem_copy((void *)arr1, (void *)arr2, sizeof(arr1)/sizeof(int)); //int or arr1[0]

	for(int i = 0; i<10 ; i++) {
		printf("%d ", arr2[i]);
	}
}
