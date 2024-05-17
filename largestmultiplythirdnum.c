#include <stdio.h>

void main(){
	float num1, num2, num3, result;
	char operator;
	
	printf("Multiply the third num with largest. press *");
	scanf("%c", &operator);
	
	printf("Enter three numbers:");
	scanf("%f %f %f", &num1, &num2, &num3);
	
	float largest;
	
	if(num1>num2){
		largest=num1;
	}
	else{
		largest=num2;
	}
	
	
	switch(operator){
		case '*':
			result= largest*num3;
			break;
			
	    default:
	    	printf("Error: Invalid operator");
	}
	printf("Result: %f", result);
}
