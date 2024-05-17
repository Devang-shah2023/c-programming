#include <stdio.h>
void main(){
	float num1, num2, result;
	char operator;
	
	printf("enter two numbers:");
	scanf("%f %f", &num1, &num2);
	
	printf("Enter an operator(+,-,*,/):");
	scanf("%c", &operator);
	
	switch(operator){
		case '+':
			result= num1 +num2;
			printf("Result: %f", result);
			break;
		
		case '-':
			result= num1- num2;
			printf("Result: %f", result);
			break;
			
		case '*':
			result= num1*num2;
			printf("Result: %f", result);
			break;
		
		case '/':
			if(num!=0){
				result= num1/num2;
				printf("Result: %f", result);
			}
			else{
				printf("Error: division by zero is not allowed");
			}
			break;
			
			default:
				printf("Error: Invalid operator");
			
	}
}
