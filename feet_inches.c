#include <stdio.h>

void main(){
	float feet, inches;
	
	printf("Enter feet:");
	scanf("%f", &feet);
	
	inches= feet*12;
	
	printf("%f feet is equal to %f inches", feet, inches);
}
