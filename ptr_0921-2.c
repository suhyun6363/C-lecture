#include <stdio.h>
int main(void)
{
	short arr[4] = {10, 20, 30, 40};
	short *p;
	p = arr;
	
	for(int i = 0; i<4 ; i++)
	{
		arr[i] = *(p+i);
	}
	printf("arr[4] = [");
	for(int i=0 ; i<4 ; i++)
		printf("%d ", arr[i]);
	printf("]\n");
}
