#include <stdio.h>
void main(){
	int number;
	
	printf("Enter a number:");
	scanf("%d", &number);
	
	if(number &1){
		printf("%d is odd number.", number);
	}
	else {
		printf("%d is even number.", number);
	}
}

