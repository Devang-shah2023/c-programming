#include <stdio.h>

void main(){
	float radius, area;
	const float pi= 3.141;
	
	printf("Enter the radius of the circle:", radius);
	scanf("%f", &radius);
	
	area= pi*radius*radius;
	
	printf("Area of the circle: %f", area);
}
