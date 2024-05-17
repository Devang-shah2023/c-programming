#include <stdio.h>

void swap(int*a, int*b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

void main(){
	int num1, num2;
	
	printf("Enter the two numbers number 1 and number 2:");
	scanf("%d %d", &num1, &num2);
	
	printf("before swapping: num1=%d, num2=%d\n", num1, num2);
	
	int *ptr1=&num1;
	int *ptr2=&num2;
	
	swap(ptr1, ptr2);
	
	printf("After swapping: num1=%d, num2=%d\n", num1, num2);
}
