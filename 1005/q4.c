#include <stdio.h>
int main(void) {
	int arr1[5] = {10, 20, 30, 40, 50};
	int arr2[5] = {100, 200, 300, 400, 500};
	int target[10];
	int *p1, *p2;
	p1 = arr1;
	p2 = target;
	for(int i = 0 ; i < 5 ; i++) {
		*p2++ = *p1++;
	}
	p1 = arr2;
	for(int i = 0; i<5; i++) {
		*p2++ = *p1++; //p2 이어서 ++되기 때문에 건드릴 필요 없다. 
		
	}
	for(int i = 0 ; i < 10 ; i++)
		printf("%d ", target[i]);

}
