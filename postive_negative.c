#include <stdio.h>
void main(){
	int number;
	
	printf("Enter a Number:");
	scanf("%d", &number);
	
	if(number>0){
		printf("The number is positive");
	}
	else if(number<0){
		printf("The number is negative");
	}
	else{
		printf("The number is zero");
	}
}
