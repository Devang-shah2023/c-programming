#include <stdio.h>

void main(){
	int number, fd, ld;
	
	printf("Enter a number:");
	scanf("%d", &number);
	
	ld= number%10;
	
	while(number>=10){
		number/=10;
	}
	fd=number;
	
	int sum= fd+ld;
	
	printf("sum of the first and last digits: %d", sum);
}
