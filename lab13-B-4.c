#include <stdio.h>

void main(){
	int i, j, n=5, a=1;
	char ch='A';
	for(i=1;i<=n; i++){
		
		for(j=1; j<=n-i; j++){
			printf(" ");
		}
		
		for(j=1; j<=i; j++){
			
		
				if(i%2==0){
					printf("%c", ch);
					ch++;
				}
				else{
					printf("%d", j);
					
				}
				printf(" ");
		}
		printf("\n");
	}
	
}
