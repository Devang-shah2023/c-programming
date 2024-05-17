#include <stdio.h>

int max(int num1, int num2){
	return(num1>num2)?num1:num2;
}

int min(int num1, int num2){
	return(num1<num2)?num1:num2;
}
int same(int num1, int num2){
	return(num1=num2)?num1:num2;
}

void main(){
	int num1, num2;
	
	printf("Enter the first number");
	scanf("%d", &num1);
	printf("Enter the seconf number");
	scanf("%d", &num2);
	
	int maximum= max(num1, num2);
	int minimum= min(num1, num2);
	int equal= same(num1, num2);
	
	if(num1!=num2){
	printf("Maximum of %d and %d is: %d\n", num1, num2, maximum);
	printf("Minimum of %d and %d is: %d\n", num1, num2, minimum);
}
else{
	printf("the given numbers are equal: %d", num1);
}
}

