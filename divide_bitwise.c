#include <stdio.h>

void main(){
  int number;
	
	printf("Enter the number:");
	scanf("%d", &number);
	
	int result= number>>1;
	printf("After dividing by 2: %d", result);
}
