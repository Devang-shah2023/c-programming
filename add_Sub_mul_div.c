#include <stdio.h>

void main(){
	int a,b, choice;
	
	printf("Enter the first number:");
	scanf("%d",&a);
	
	printf("Enter the second number:");
	scanf("%d",&b);
	
	printf("Choose an operation:");
	printf("1. Addition ");
	printf("2. Subtraction ");
	printf("3. Multiplication ");
	printf("4. Division\n");
	
	printf("Enter your choice(1/2/3/4): ");
	scanf("%d",
	&choice);
	
	if(choice ==1){
		printf("Result: %d + %d= %d", a,b, a+b);
	}
	else if(choice ==2){
		printf("Result: %d - %d= %d", a,b, a-b);
	}
	else if(choice ==3){
		printf("Result: %d * %d= %d", a,b, a*b);
	}
	else if(choice ==4){
		if(b==0){
			printf("Cannot divide by zero");
		}
		else{
			printf("Result: %d / %d= %f", a,b, (float)a/b);
		}
	}
	else {
		printf("Invalid choice");
	}
}
