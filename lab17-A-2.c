#include <stdio.h>
void main(){
	
	int ivalue=42;
	float fvalue=3.14;
	double dvalue=2.71828;
	char cvalue='A';
	
	int *intptr=&ivalue;
	float *floatptr=&fvalue;
	double *doubleptr=&dvalue;
	char *charptr=&cvalue;
	
	printf("Value of integer variable: %d\n", *intptr);
	printf("Value of float variable: %f\n", *floatptr);
	printf("Value of double variable: %lf\n", *doubleptr);
	printf("Value of char variable: %c\n", *charptr);
	
	printf("Address of integer variable: %d\n", (void*)intptr);
	printf("Address of float variable: %d\n", (void*)floatptr);
	printf("Address of double variable: %d\n", (void*)doubleptr);
	printf("Address of char variable: %d\n", (void*)charptr);
}
