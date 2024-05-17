#include <stdio.h>

void main(){
	int num1, num2, sum;
	
	printf("Enter value of number 1 and number 2:");
	scanf("%d %d", &num1, &num2);
	
	int *ptr1=&num1;
	int *ptr2=&num2;
	
	sum=*ptr1+*ptr2;
	
	printf("Sum of %d and %d is: %d\n", *ptr1, *ptr2, sum);
}
