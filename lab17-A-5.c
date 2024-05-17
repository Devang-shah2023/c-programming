#include <stdio.h>

void main(){
	int n, i;
	
	printf("Enter the number of elements:");
	scanf("%d", &n);
	
	int arr[n];
	
	printf("Enter %d elements: \n", n);
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	
	int *ptr=arr;
	
	printf("Elements in the array using pointer: \n");
	for(i=0; i<n; i++){
		printf("%d\n", *(ptr+i));
	}
}
