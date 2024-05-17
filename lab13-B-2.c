#include <stdio.h>

void main(){
	int n=5, i=1, j=1;
	
	for(i=1; i<=n; i++){
		int value= i%2;
		
		for(j=1; j<=i; j++){
			printf("%d", value);
			value=1-value;
		}
		printf("\n");
	}
}
