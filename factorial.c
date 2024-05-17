#include <stdio.h>
void main(){
	int n;
	float i=1, f=1;
	
	printf("Enter a non negative integer:");
	scanf("%d", &n);
	
	if(n<0){
		printf("Factorial is not defined.");
	}
	else{
		for(i=1; i<=n; i++){
			f*=i;
		}
		printf("factorial of %d= %f", n, f);
	}
}
