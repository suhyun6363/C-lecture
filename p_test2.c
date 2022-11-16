#include <stdio.h>
int main(void)
{
	int arr[3];
	short bb[4];
	
	printf("&arr = %p\n", &arr);
	printf("&arr[1] = %p\n", &arr[1]);
	printf("&arr[0]+1 = %p\n\n", &arr[0]+1);

	printf("&arr[0]+2 = %p\n", &arr[0]+2);
	printf("&arr[2] = %p\n\n", &arr[2]);

	printf("&bb[2] = %p\n", &bb[2]);
	printf("&bb[0]+2 = %p\n", &bb[0]+2);
	printf("bb+2 = %p\n\n", bb+2);

	printf("&bb[0]+3 = %p\n", &bb[0]+3);
	printf("bb+3 = %p\n", bb+3);
	printf("&bb[3] = %p\n", &bb[3]);

}
