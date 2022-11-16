#include <stdio.h>
#include <string.h>

void str_nl_cat(char* s1,char* s2) {
	
	while(*s1 != '\0') {
		s1++;
	}
	*s1 = '\n';
	s1++;
	
/*	

	s1 += strlen(s1);
	*s1 = '\n';	
	s1++;
*/
	strcpy(s1, s2);

}

int main(void) {
	char* str1 = "hello~ ";
	char* str2 = "I'm Suhyun";
	char str3[20];
	strcpy(str3, str1);
	str_nl_cat(str3, str2);
	puts(str3);
}
