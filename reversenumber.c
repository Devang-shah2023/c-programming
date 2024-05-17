#include <stdio.h>

void main(){
	int number, new=0, remainder;
	
	printf("enter an integer:");
	scanf("%d", &number);
	
	while(number!=0){
		remainder=number%10;
		new=new*10+remainder;
		number/=10;
	}
	printf("the number in reverse order is: %d", new);
}
