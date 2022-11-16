#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void input_string(char* s) {
	printf("input s1: ");
	gets(s);	
}
int main(void) {
	char* s1, *s2;
	int compare = 1;
	int limit = 5;
	
	s1 = (char*)malloc(sizeof(char*));
	input_string(s1);

	while(strlen(s1) > 5) {
		if(strlen(s1) > 5) {
			printf("너무 깁니다.\n");
			input_string(s1);
		}
		else {
			puts(s1);
		}
		break;
	}
	printf("\n");

	s2 = (char*)malloc(sizeof(char*));
	printf("input s2: ");
	gets(s2);
	
	while(strlen(s2) > 5) {
		if(strlen(s2) > 5) {
			printf("너무 깁니다.\n");
		}

		printf("input s2: ");
		gets(s2);
		break;
		
	}
	puts(s2);
	printf("\n");

	compare = strncmp(s1, s2, 100);
	if(compare == 0)
		printf("같습니다.\n");
	else
		printf("다릅니다.\n");

	free(s1);
	free(s2);
}
