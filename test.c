#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int a[5], b[5], c[10], min=50, max=0;
	srand((unsigned int)time(NULL));

	for(int i=0 ; i< 5 ; i++){
		a[i]=rand() %20 +1; //1~20
		b[i]=rand() %20+1;
	}
	for(int i=0;i<5;i++) 		c[i]=a[i];
	for(int j=0;j<5;i++, j++) 	c[i]=b[j];

	printf("a[5] = [ ");
	for(int j=0 ; j<5 ; j++){
		printf("%d ", a[j]);
	}
	printf("]\n");
	
	printf("b[5] = [ ");
	for(int j=0 ; j<5 ; j++){
		printf("%d ", b[j]);
	}
	printf("]\n");
	
	printf("c[10] = [ ");
	for(int j=0 ; j<5 ; j++){
		printf("%d ", a[j]);
	}
	for(int j=0 ; j<5 ; j++){
		printf("%d ", b[j]);
	}
	printf("]\n");

	for(int i=0; i<10 ; i++){
		for(int j=0 ; j<10 ; j++){
			if (c[j]<min){
				min=c[j];
				i++;
			}
		}
	}
	for(int i=0; i<10;i++){
		for(int j=0 ; j<10 ; j++){
				if (c[j]>max){
					max=c[j];
					i++;
				}
		}
	}
	printf("max: %d, min: %d\n", max, min);


}
