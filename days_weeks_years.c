#include <stdio.h>
void main(){
	int total_days, years, weeks, days;
	
	printf("Enter total days:");
	scanf("%d", &total_days);
	
	years= total_days/365;
	total_days%=365;
	
	weeks= total_days/7;
	days= total_days %7;
	
	printf("Equivalent: %d years, %d weeks, %d days", years, weeks, days);
}
