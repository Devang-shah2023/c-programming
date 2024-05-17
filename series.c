#include <stdio.h>

void main(){
	int n=1, i=1;
	
	printf("First 50 numbers in the series 1,4,7,10....:");
	
	for( i=1; i<=50; i++){
		printf("%d", n);
		n+=3;
	}
	
}
