#include <stdio.h>
int main(void)
{
	int k =3;
	int *p;
	p = &k;
	printf("value of p = %p\n", p);
	printf("value of *p = %d\n", *p);
	printf("value of &p = %p\n", &p);
}
