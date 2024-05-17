#include <stdio.h>
#define pf printf

void main(){
	int n=5,i,j,k;
	for(i=5; i>=1; i--){
		/*for(k=0; k<n-i;k++){
			printf(" ");
		}
		for(j=1; j<=i; j++){
			printf(" *");
		}*/
		
		for(k=0; k<n-i; k++){
			pf(" ");
		}
		for(j=1; j<=i; j++){
			pf(" *");
		}
		printf("\n");
	}
}
