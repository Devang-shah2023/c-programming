#include<stdio.h>
void main(){

int a,b,choice;
printf("enter the first number:");
scanf("%d",&a);
printf("enter the second number:");
scanf("%d",&b);
printf("choose an operation");
printf(" 1. +");
printf(" 2. -");
printf(" 3. *");
printf(" 4. / ");
printf(" enter your choice(1/2/3/4):");
scanf("%d",&choice);
if (choice==1){
	printf("result : %d + %d = %d",a,b,a+b);
}
else if (choice==2){
	printf("result : %d - %d = %d",a,b,a-b);
}
else if (choice==3){
	printf("result : %d * %d = %d",a,b,a*b);
}
else if (choice==4){
	if(b==0){
		printf("cannot divide by zero");
	}
	else{
		printf("result : %d / %d = %f",a,b,(float)a/b);
	}
}
else{
	printf("invalid choice");
}
}

