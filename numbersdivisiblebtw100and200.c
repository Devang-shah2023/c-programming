#include <stdio.h>

void main(){
	int i=101;
	
	printf("Integers between 100 and 200 that are divisble by 7 but not by 5:");
	
	for(; i<200; i++){
		if(i%7==0 && i%5!=0){
		printf("%d\n", i);
	}
	}
}
