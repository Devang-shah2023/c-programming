#include <stdio.h>
void main(){
	int n, i=1;
	
	printf("Enter a positive integer:");
	scanf("%d", &n);
	
	if(n<=0){
		printf("Please enter a positive number.");
	}
	printf("Factors of %d are:", n);
	
	for(i=1; i<=n; i++){
		if(n%i==0){
			printf("%d\n", i);
		}
	}
	printf("\n");
}
