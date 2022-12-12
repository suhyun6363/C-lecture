#include <stdio.h>

int hap(int n, int m) {
	return (n+m);
}

int sub(int n, int m) {
	return n-m;
}

int mul(int n, int m) {
	return n*m;
}
int main(void) {
	int a=5, b=8, result;
	int (*fp_list[3])(int, int);

	fp_list[0] = hap;
	fp_list[1] = sub;
	fp_list[2] = mul;

	for(int i = 0; i<3; i++) {
		result = fp_list[i](a, b);
		printf("result = %d\n", result);
	}
}
