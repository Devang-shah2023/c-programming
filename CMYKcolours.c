#include <stdio.h>
void main(){
	int red, green, blue;
	float cyan, magenta, yellow, black, white;
	
	printf("Enter RGB values separated by spaces:");
	scanf("%d %d %d", &red, &green, &blue);
	
	white=(red/255.0> green/255.0)? (red/255.0):(green/255.0);
	white=(white>blue/255.0)? white:(blue/255.0);
	
	cyan=(white-red/255.0)/white;
	magenta= (white-green/255.0)/white;
	yellow=(white-blue/255.0)/white;
	black= 1.0 -white;
	
	printf("CMYK values:");
	printf("Cyan: %f", cyan);
	printf("Magenta: %f", magenta);
	printf("Yellow: %f", yellow);
	printf("Black: %f", black);
}
