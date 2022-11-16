#include <stdio.h>
//#include "suhyun.h"

int main(void)
{
//	int k = 8;
//	int l = 3;
	int a[3] = {0, 1, 2};
	int y = 5;
	
	printf("a[] = %d %d %d\n", a[0], a[1], a[2]);
	printf("addr a[] = %p %p %p\n", &a[0], &a[1],&a[2]);
	printf("y : %d (addr %p)\n",y, &y);
}
