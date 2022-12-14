#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	int n1, n2, result;
	if(argc != 4) {
		printf("Type Error\n");
		return 0;
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	switch(argv[2][0]) //argv[2]의 문자 하나만 보겠다
	{
		case '+': result = n1+n2; break;
		case '-': result = n1 - n2; break;
		case '*': result = n1 * n2; break;
		case '/': result = n1 / n2; break;
		default: break;
	}
	printf("%d %c %d  = %d\n", n1, argv[2][0], n2, result);
}
