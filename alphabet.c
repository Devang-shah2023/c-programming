#include <stdio.h>

void main(){
	char character;
	printf("Enter a character:");
	scanf("%c", &character);
	
	((character>='a'&& character<='z')||(character>='A' && character<='Z'))? printf("%c is an alphabet", character): printf("%c is not any alphabet", character);
} 
