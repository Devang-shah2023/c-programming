#include <stdio.h>
void main(){
	char c;
	
	printf("Enter a character:");
	scanf("%c", &c);
	
	if(c>='A'&& c<='Z'){
		printf("%c is an uppercase letter", c);
	}
	else if(c>='a'&& c<='z'){
		printf("%c is a lowercase letter", c);
	}
	else if(c>='0'&& c<='9'){
		printf("%c is a digit", c);
	}
	else{
		printf("%c is a special character", c);
	}
}
