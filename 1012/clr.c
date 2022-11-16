//main 함수 내 arr[5] 선언, call by reference 사용하여 외부 함수에서 10~50 값 입력
#include <stdio.h>

int test(int *p, int size)
{
	for(int i = 0; i<5 ; i++) {
		*p++ = (i+1)*10;
	}
}
int main(void){
	int arr[5];
	test(arr, 5); //배열의 크기까지 같이 넘겨준다.
	for(int i = 0; i< 5 ; i++)
		printf("%d ", arr[i]);
	
}
