#include <stdio.h>

void main(){
	int n, sum=0, i=1;
	int sign=1;
	
	printf("enter a positive integer 'n':");
	scanf("%d", &n);
	
	if(n<=0){
		printf("Please enter a positive integer.");
	}
	else{
		printf("sum of series is", n);
		
		for(; i<=n; i++){
			sum+=sign*i;
			sign=-sign;
		}
	}
	printf("%d\n", sum);
}
