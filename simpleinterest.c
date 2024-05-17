#include <stdio.h>
void main(){
	float principal, roi, time, interest, rate;
	
	printf("Enter the principal amount:", principal);
	scanf("%f", &principal);
	
	
	printf("Enter the rate of  interest:", roi);
	scanf("%f", &roi);
	
	rate= roi/100;
	
	printf("Enter the time period:", time);
	scanf("%f", &time);
	
	interest= (principal*rate*time)/100;
	printf("interest: %f", interest);
}
