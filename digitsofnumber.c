#include <stdio.h>

void main(){
	int number, digit;
	
	printf("Enter an integer:");
	scanf("%d", &number);
	
	printf("Digits of %d are\n", number);
	
	while(number!=0){
		digit= number%10;
		printf("%d\n", digit);
		number/=10;
	}
	printf("\n");
}
