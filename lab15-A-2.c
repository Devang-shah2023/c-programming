#include <stdio.h>

void main(){
	int n, i=0;
	
	printf("Enter the number of elements:");
	scanf("%d", &n);
	
	int numbers[n];
	
	printf("Enter the elements:\n");
	for(i=0; i<n; i++){
		scanf("%d", &numbers[i]);
	}
	int count=0;
	
	for(i=0; i<n; i++){
		if(numbers[i]<0){
			count++;
		}
	}
	
	printf("Number of negative elements: %d\n", count);
}
