#include <stdio.h>
#include <string.h>

size_t str_len(char* s) {
	size_t n = 0;
	for(int i = 0; ;i++) {
		s++;
		if(*s == '\0')
			break;
		else
			n++;
	}
	/*
	while(*s++ != '\0') { //same to *s != null(0)
		n++;
	}
	return n;
	*/
} 

int main(void) {
	char* str = "hello";
	printf("strlen = %d\n", str_len(str)); 
}
