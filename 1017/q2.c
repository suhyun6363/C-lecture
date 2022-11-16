#include <stdio.h>

void arr_input(int *p) {
	
	for(int i = 0; i<10 ; i++) {
		scanf("Input Num: ", p++);
	}
}

void arr_copy(int *src, int *dst, int num) {
	for(int i = 0 ; i < num ; i++)
		*dst ++ = *src;;	
}

int arr_compare(int *src, int *dst, int n) {
	for(int i = 0; i<n ; i++)
		if(*src++ != *dst++) return -1;
	return 0;
}
void arr_display(int *arr) {
	for(int i = 0; i<10;i++)
		printf("%d ", *arr++);
	printf("\n");
}
int main(void) {
	int arr1[10], arr2[10];
	
	arr_input(arr1);
	arr_display(arr1);
	arr_copy(arr1, arr2, 10);
	if(arr_compare(arr1, arr2, 10) == -1) printf("error\n");
	arr_display(arr2);

}
