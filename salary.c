#include <stdio.h>
void main(){
	float bs, gs, hra, da;
	
	printf("Enter the basic Salary of an employee:");
	scanf("%f", &bs);
	
	if(bs>= 30000){
		hra= 0.30*bs;
		da=0.95*bs;
	}
	else if(bs>= 20000){
		hra=0.25*bs;
		da=0.90*bs;
	}
	else if(bs>= 10000){
		hra=0.20*bs;
		da=0.80*bs;
	}
	else{
		printf("Your salary is less than 10000");
	}
	
	gs= bs +hra +da;
	
	printf("Basic Salary: %f", bs);
	printf("HRA: %f", hra);
	printf("DA: %f", da);
	printf("Gross Salary: %f", gs);
}
