#include <stdio.h>
void main(){
	int x=42;
	int *ptr=&x;
	
	printf("Value of x: %d\n", *ptr);
	printf("Address of x: %d\n", (void*)ptr);
}
