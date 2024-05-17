#include <stdio.h>

void main(){
	int n, i=1;
	
	printf("Odd numbers from 1 to 10:");
	for(i=1; i<=10; i++){
		if(i%2!=0){
			printf("%d\n", i);
		}
	}
	printf("\n");
	
	printf("Enter a positive integer:");
	scanf("%d", &n);
	
	printf("Odd numbers from 1 to %d using while loop", n);
	while(i<=n){
		if(i%2!=0){
			printf("%d\n", i);
		}
		i++;
	}
	printf("\n");
	
	printf("odd numbers from 1 to %d using a do-while loop:", n);
	i=1;
	
	do{
		if(i%2!=0){
			printf("%d\n", i);
		}
		i++;
	}
	while(i<=n);
	printf("\n");
}
