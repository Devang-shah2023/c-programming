#include <stdio.h>

void main(){
	int total_seconds, hours, minutes, seconds;
	
	printf("Enter total seconds:");
	scanf("%d", &total_seconds);
	
	hours= total_seconds/3600;
	total_seconds %= 3600;
	
	minutes= total_seconds/60;
	seconds= total_seconds %60;
	
	printf("Time: %d: %d: %d:", hours, minutes, seconds);
}
