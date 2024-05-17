#include <stdio.h>

void main(){
	int n, i;
	
	printf("Enter the number of elements:");
	scanf("%d", &n);
	
	int numbers[n];
	
	printf("enter the elements: \n");
	for(i=0; i<n; i++){
		scanf("%d", &numbers[i]);
	}
	int count=0;
	
	for(i=0; i<n; i++){
		if(numbers[i]%3==0){
			count++;
		}
	}
	printf("Number of elements divisible by 3: %d\n", count);
}
