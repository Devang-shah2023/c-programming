#include <stdio.h>

void main(){
	float num1, num2, num3, largest;
	
	printf("Enter three number:");
	scanf("%f %f %f", &num1, &num2, &num3);
	
	largest=num1>num2?(num1>num3?num1:num3):(num2>num3?num2:num3);
	printf("The largest number is %f", largest);
}
