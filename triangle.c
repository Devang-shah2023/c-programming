#include <stdio.h>
void main(){
	float side1, side2, side3;
	
	printf("Enter the lengths of the three sides of triangle:");
	scanf("%f %f %f", &side1, &side2, &side3);
	
	if(((side1*side1)==(side2*side2)+(side3*side3))||((side2*side2)==(side1*side1)+(side3*side3))||((side3*side3)== (side1*side1)+(side2*side2)))
	{ printf("It is a right angled triangle.");
	}
	else{
		if(side1==side2 && side2==side3){
			printf("It is an equilateral triangle.");
		}
		else if(side1==side2 || side2==side3 || side1==side3){
			printf("It is an isosceles triangle.");
		}
		else{
			printf("It is a scalene triangle.");
		}
	}
}
