#include <stdio.h>

void main(){
	int n, i=0;
	
	printf("Enter the number of elements:");
	scanf("%d", &n);
	
	int arr[n];
	
	printf("Enter the elements: \n");
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
		
	}
	
	printf("Numbers in normal order:");
	for(i=0; i<n; i++){
		printf("%d\n", arr[i]);
	}
	printf("Numbers in reverse order:");
	for(i=n-1; i>=0; i--){
		printf("%d\n", arr[i]);
	}
	printf("\n");
}
