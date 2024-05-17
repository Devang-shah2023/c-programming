#include <stdio.h>

void main(){
	int i=1;
	
	printf("Number|square");
	printf("........");
	
	for(; i<=10; i++){
		int square= i*i;
		printf("%d|%d\n", i, square);
		
	}
}
