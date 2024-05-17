#include <stdio.h>

void main(){
	int n=5, i=1, j=5;
	
	for(i=1; i<=n; i++){
		for(j=5; j>=i; j--){
			printf("%d", j);
		}
		printf("\n");
	}
}
