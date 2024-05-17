#include <stdio.h>

void main(){
	int n, i=0;
	
	printf("Enter the number of elements:");
	scanf("%d", &n);
	
	int numbers[n];
	
	printf("Enter the elements:");
	for(i=0; i<n; i++){
		scanf("%d", &numbers[i]);
	}
	int max= numbers[0];
	int min= numbers[0];
	
	int sum= numbers[0];
	double avg;
	
	for(i=1; i<n; i++){
		if(numbers[i]>max){
			max= numbers[i];
		}
		if(numbers[i]<min){
			min= numbers[i];
		}
		sum+=numbers[i];
	}
	avg= sum/n;
	
	printf("Maximum: %d\n", max);
	printf("Minimum: %d\n", min);
	printf("Sum: %d\n", sum);
	printf("Average: %.2f\\n", avg);
}
