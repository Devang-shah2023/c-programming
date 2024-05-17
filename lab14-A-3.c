#include <stdio.h>

void main(){
	int n, i=0;
	
	printf("Enter the number of elements:");
	scanf("%d", &n);
	
	int numbers[n];
	int evencount=0;
	int oddcount=0;
	
	printf("Enter the elements:");
	
	for(i=0; i<n; i++){
		scanf("%d", &numbers[i]);
		if(numbers[i]%2==0){
			evencount++;
		}
		else{
			oddcount++;
		}
	}
	
	printf("Number of even numbers: %d\n", evencount);
	printf("Number of odd numbers: %d\n", oddcount);
}
