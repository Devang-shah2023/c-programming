#include <stdio.h>
void main(){
	int a,b;
	printf("Enter the first number:");
	scanf("%d", &a);
	
	printf("Enter the second number:");
	scanf("%d", &b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("After Swapping: First number= %d, Second number= %d", a,b);
}
