#include <stdio.h>
void main(){
	int monthnumber;
	
	printf("Enter a month number(1-12):");
	scanf("%d", &monthnumber);
	
	switch(monthnumber){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("31 days");
			break;
			
		case 4:
		case 6:
		case 9:
		case 11:
			printf("30 days");
			break;
			
		case 2:
			printf("28 or 29 days(depending on leap year)");
			break;
			
		default:
			printf("Invalid month number. Please enter number between 1 and 12.");
	}
}
