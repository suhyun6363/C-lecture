#include <stdio.h>
#include <stdlib.h>
#define ARR_LEN	5
short* mem_copy(short* p) {
	short* pp, * first;
	pp = (short*)malloc(sizeof(short) * ARR_LEN);
	first = pp;
	for(int i = 0; i<ARR_LEN; i++)
		*pp++ = (*p)++;
	return first;
}
int main() {
	short arr[ARR_LEN] = {1, 2, 3, 4, 5};
	short* a, * fr;
	a = mem_copy(arr);
	fr = a;
	for(int i = 0; i < ARR_LEN; i++)
		printf("%d ", (*a)++);
	free(fr);
}
