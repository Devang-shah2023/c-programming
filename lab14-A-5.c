#include <stdio.h>

void main(){
	int height[5];
	int weight[5];
	
	int count=0, i=0;
	
	for(i=0; i<5; i++){
		
		printf("Enter height for person %d:",i);
		scanf("%d", &height[i]);
	}
		
	for(i=0; i<5; i++){
		
		printf("Enter weight for person %d:",i);
		scanf("%d", &weight[i]);
	}
	
	for(i=0; i<5; i++){
	
		
		if(height[i]>170 && weight[i]<50){
			count++;
		}
	
	}
	printf("Number of person with height>170 and weight<50: %d", count);
}
