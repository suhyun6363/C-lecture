#include <stdio.h>
int main(void)
{
	short arr[4] = {10, 20, 30, 40};
	short *p = arr;

	int i;
	for(i = 0; i<4; i++)
	{
		*p=arr[i];    //원본 arr이 훼손됨 -> p = &arr[i];
		printf("%d ", *p);
	}
}
