#include <stdio.h>

void main(){
	int i=1, num;
	
	printf("Enter a number:");
	scanf("%d", &num);
	
	printf("Multiplication table for %d:\n", num);
	
	for(; i<=10; i++){
		printf("%d*%d=%d\n", num, i, num*i);
	}
}
