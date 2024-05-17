#include <stdio.h>

void main(){
	int n, i=1;
	long sum=0;
	
	printf("Enter the value of n:");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		sum+=(long)i*i;
	}
	printf("Sum of series is: %ld", sum);
}
