#include <stdio.h>

void main(){
	int n=5, i=1, j=1;
	
	for(i=1; i<=n; i++){
		for(j=1; j<=i; j++){
			printf("%d", i);
		}
		printf("\n");
	}
}
