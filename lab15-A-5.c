#include <stdio.h>
#include <string.h>

void main(){
	char str[100];
	int length;
	
	printf("Enter a string:");
	gets(str);
	
	length=strlen(str);
	
	printf("Entered string: %s\n", str);
	printf("Length of the string: %d\n", length);  
}
