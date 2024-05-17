#include <stdio.h>

void main(){
	int n, poscount=0, negcount=0, i=0;
	
	printf("enter the number of elements:");
	scanf("%d", &n);
	
	int numbers[n];
	
	printf("Enter the elements:");
	
	for(i=0; i<n; i++){
		scanf("%d", &numbers[i]);
		
		if(numbers[i]>0){
			poscount++;
		}
		else {
			negcount++;
		}
	}
	printf("Number of positive numbers: %d", poscount);
	printf("Number of negative numbers: %d", negcount);
}
