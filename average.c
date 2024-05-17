#include <stdio.h>
void main(){
	int a,b,c;
	
	printf("Enter the first number:");
	scanf("%d", &a);
	
	printf("Enter the second number:");
	scanf("%d", &b);
	
	printf("Enter the third number:");
	scanf("%d", &c);
	
	float average=(a+b+c)/3.0;
	printf("average %f",average);
}
