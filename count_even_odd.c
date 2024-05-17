#include <stdio.h>

void main(){
	int num, even=0, odd=0, i=1;
	
	printf("enter 10 numbers, one at a time:");
	
	for(;i<=10; i++){
		printf("enter a number %d:", i);
		scanf("%d", &num);
		
		if(num%2==0){
			even++;
		}
		else{
			odd++;
		}
	}
	printf("Count of even numbers: %d", even);
	printf("Count of odd numbers: %d", odd);
}
