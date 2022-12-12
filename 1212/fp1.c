#include <stdio.h>

int hap(int n1, int n2) {
	return (n1+n2);
}

void  hap2(int* n1, int* n2, int* s) {
	*s = *n1 + *n2;
}
int main(void) {
	int a =3, b=5, sum, sum2;
	int (*fp)(int, int);
	void(*fp2)(int*, int*, int*);

	fp = hap;
	//call-by-reference
	//sum = hap(a, b);
	sum = fp(a, b);
	printf("sum = %d\n", sum);	

	fp2 = hap2;
	//call-by-reference
	//hap2(&a, &b, &sum2);
	fp2(&a, &b, &sum2);
	printf("sum = %d\n", sum2);	
}
