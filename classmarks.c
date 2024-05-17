#include <stdio.h>
void main(){
	int marks [5];
	int totalmarks=0;
	
	printf("Enter marks for five subjects:");
	for(int i=0; i<=5; i++){
		printf("Subject %d:", i+1);
		scanf("%d", &marks[i]);
		totalmarks += marks[i];
	}
	float percentage= (float)totalmarks/5;
	
	printf("Percentage: %f", percentage);
	
	if(percentage<35){
		printf("Class: Fail");
	}
	else if(percentage>=36 && percentage<=45){
		printf("Class: Pass Class");
	}
	else if(percentage>=46 && percentage<=60){
		printf("Class: Second Class");
	}
	else if(percentage >=61 && percenatage<=70){
		printf("Class: First Class");
	}
	else {
		printf("Class: Distinction");
	}
}
