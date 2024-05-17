#include <stdio.h>

void main(){

int n, target, i=0;

printf("Enter the number of elements:");
scanf("%d", &n);

int numbers[n];

printf("Enter the elements: \n");
for(i=0; i<n; i++){
	scanf("%d", &numbers[i]);
}

printf("Enter the element to search for:");
scanf("%d", &target);

int found=0;

for(i=0; i<n; i++){
	if(numbers[i]== target){
		found=1;
		break;
	}
}

if(found){
	printf("%d is found in the array.\n", target);
}
else{
	printf("%d is not found in the array.\n");
}
}
