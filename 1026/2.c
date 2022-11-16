#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM	10
void arr_rand(int* p1,int* p2, int n) {
	srand((unsigned int)time(NULL));

	for(int i = 0; i<n ; i++) {
		*p1++ = rand() % 100 + 1;
		*p2++ = rand() % 100 + 1;
	}
}

void arr_input(int* p, int n){
	for(int i = 0;i<n; i++){
		printf("Input arr[");
		printf("%d", i);
		printf("]:");
		scanf("%d", p++);
	}
}

void arr_copy(int* p1, int* p2, int n) {
	for(int i = 0; i<n; i++)
		*p2++ = *p1++;
}
int arr_compare(int* p1, int* p2, int n) {
	if(*p1++!=*p2++)
		return -1;
	return 0;
}
void arr_display(int* p, int n, int arrn) {
	for(int i = 0; i<n ; i++) {
		printf("arr");
		printf("%d", arrn);
		printf("[");
		printf("%d", i);
		printf("]:");
		printf("%d\n", *p++);
	}
}
int main(void) {
	int arr1[NUM], arr2[NUM];
	arr_rand(arr1, arr2, NUM);
	arr_display(arr1, NUM, 1);
	printf("\n");
	arr_display(arr2, NUM, 1);
	
	//arr_copy(arr1, arr2, NUM);
	for(int i = 0; i<NUM;i++) {
		if(arr_compare(arr1,arr2, NUM) == -1)
			printf("error\n");
		else
			printf("ok\n");
	}
	printf("\n");

}
