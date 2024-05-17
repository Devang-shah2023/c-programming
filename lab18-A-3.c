#include <stdio.h>

float simpleint(float principal, float rate, float time){
	return(principal*rate*time)/100;
}

void main(){
	float principal, rate, time, interest;
	
	printf("Enter principal amount:");
	scanf("%f", &principal);
	printf("Enter rate of interest:");
	scanf("%f", &rate);
	printf("enter time(in years):");
	scanf("%f", &time);
	
	interest=simpleint(principal, rate, time);
	
	printf("Simple interest: %.2f\n", interest);
}
