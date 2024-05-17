#include <stdio.h>

void main(){
	int a,b, temp;
	
	printf("Enter the first number:");
	scanf("%d", &a);
	
	printf("Enter the second number:");
	scanf("%d",&b);
	
	temp=a;
	a=b;
	b=temp;
	
	printf("After swapping: First number= %d, second number= %d", a,b);
}
