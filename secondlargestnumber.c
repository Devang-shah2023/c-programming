#include <stdio.h>
void main(){
	float num1, num2, num3;
	
	printf("Enter three numbers:");
	scanf("%f %f %f", &num1, &num2, &num3);
	
	float largest= num1;
	float secondlargest= num2;
	
	if(num2<num3){
		secondlargest= num3;
	}
	if(num1<num2){
		largest= num2;
		secondlargest= num1;
	}
	if(num1<num3){
		largest=num3;
	}
	printf("The second  largest number is %f", secondlargest);
}
