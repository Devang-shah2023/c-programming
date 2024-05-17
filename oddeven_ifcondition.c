#include <stdio.h>
void main(){
	int number;
	
	printf("Enter an integer number:");
	scanf("%d", &number);
	
	int LastDigit= number%10;
	if(LastDigit%2 ==0){
		printf("The last digit %d is even.", LastDigit);
	}
	else{
		printf("The last digit %d is odd.", LastDigit);
	}
}
