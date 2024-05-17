#include <stdio.h>

void main(){
	int start, end, i;
	
	printf("enter the starting number:");
	scanf("%d", &start);
	
	printf("Enter the ending number:");
	scanf("%d", &end);
	
	if(start>end){
		printf("Starting number should be less than or equal to the ending number.");
	}
	printf("Numbers divisible by 2 between %d and %d", start, end);
	
	for(i=start; i<=end; i++){
		if(i%2==0){
			printf("%d\n", i);
		}
	}
	printf("\n");
}
