#include <stdio.h>

void main(){
	int count=0;
	float sum=0;
	char choice;
	
	printf("Enter numbers to calculate their sum and average. enter 'N'to stop.");
	
	do{
		float number;
		printf("enter a number:");
		scanf("%f", &number);
		
		sum+= number;
		count++;
		
		printf("do you want to enter another number ?(Y/N):");
		scanf("%c", &choice);
	}
	while(choice=='Y'|| choice=='y');
	
	if(count>0){
		float average= sum/count;
		
		printf("Sum of %d numbers: %f", count, sum);
		printf("Average of %d numbers: %f", count, average);
	}
	else{
		printf("No numbers were entered.");
	}
}
