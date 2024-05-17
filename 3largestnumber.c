#include <stdio.h>
void main(){
	int a,b,c;
	
	printf("Enter the first number:");
	scanf("%d", &a);
	
	printf("Enter the second  number:");
	scanf("%d", &b);
	
	printf("Enter the third number:");
	scanf("%d", &c);
	
	if(a>=b && a>=c){
		printf("%d is the largest number", a);
	}
	
	else if(b>=c && b>=a){
		printf("%d is largest number", b);
	}
	
	else{
		printf("%d is largest", c);
	
	}getch();
}
