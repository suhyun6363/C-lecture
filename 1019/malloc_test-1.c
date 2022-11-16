#include <stdio.h>
#include <stdlib.h>
#define ARR_SIZE	5
short* mem_copy(short* pp) {
	short* p, * ret;
	p = (short*)malloc(sizeof(short) * ARR_SIZE);
	ret = p;
	for(int i = 0; i<ARR_SIZE;i++)
		*p++ = (*pp)++;
	return ret; //&arr[0]을 받아야 하므로 엄한 곳을 받는 p을 리턴할 수 없음	
}
int main(void) {
	short arr[5] = {1, 2, 3, 4, 5};
	short* b, * init;
	b = mem_copy(arr);
	init = b;
	for(int i = 0;i<5;i++)
		printf("%d ", (*init)++);
	free(init);
}
