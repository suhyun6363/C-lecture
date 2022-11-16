#include <stdio.h>
#include <stdlib.h>
int* b(void) {
	int* z;
	z = (int*)malloc(sizeof(int));
	return z;
}
void a(void) {
	int* p;
	p = b();
	*p = 5;
	(*p)++;
	printf("%d\n", *p);
	free(p);
}
int main(void) {
	a();

}
