#include <stdio.h>
#include <math.h>

void main(){
	int i=0;
	
	printf("Number| square root\n");
	printf(".............\n");
	
	for(i=0; i<=9; i++){
		float sqrt_result=sqrt(i);
		printf("%d|%f\n", i, sqrt_result);
	}
}
