#include <stdio.h>

void main(){
	int arr[]={1,2,3,4,5};
	int copyarr[5];
	int i=0;
	
	for(i=0; i<5; i++){
		copyarr[i]=arr[i];
	}
	
	printf("Copied elements in destination array:");
	
	for(i=0; i<5; i++){
		printf("%d\n", copyarr[i]);
	}
}
