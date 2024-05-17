#include <stdio.h>
void main(){
	float num1, num2, result;
	char operator;
	
    printf("Enter an operator(+,-,*,/):");
	scanf("%c", &operator);
	
	
	printf("Enter two numbers:");
	scanf("%f %f", &num1, &num2);
	

	switch(operator){
		
		case '+':
			result= num1+num2;
			printf("Result: %f", result);
			break;
			
		case '-':
			result= num1-num2;
			printf("Result: %f", result);
			break;
			
		case '*':
			result= num1*num2;
			printf("Result: %f", result);
			break;
			
		case '/':
			if(num2!=0){
				result= num1/num2;
				printf("Result: %f", result);
			}
			else{
				printf("Error: division by zero is not allowed.");
			}
			break;
			
			default:
				printf("Error: invalid operator.");
	}
}
