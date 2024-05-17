#include<stdio.h>

void main(){
	int n,i; 
	
	printf("Numbers from 1 to 10 using for loop:\n");
	for(i=1;i<=10;i++){
		printf("%d\n",i);
	}
	printf("\n");
	
	printf("enter a positive integer 'n':");
	scanf("%d", &n);
	
	printf("numbers from 1 to %d:", n);
	i=1;
	while(i<=n){
		printf("%d\n", i);
		i++;
	}
	printf("\n");
	
	printf("Numbers from 1 to n using do while loop", n);
	i=1;
	do{
		printf("%d\n", i);
		i++;
	} while(i<=n);
	printf("\n");
}
