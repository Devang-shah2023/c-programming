#include <stdio.h>

void main(){
	float unitcharge, totalbill;
	
	printf("enter the electricity unit charge:");
	scanf("%f", &unitcharge);
	
	if(unitcharge<=50){
		totalbill= unitcharge*0.50;
	}
	else if(unitcharge<=150){
		totalbill= 50*0.50 +(unitcharge-50)*0.75;
	}
	else if(unitcharge<=250){
		totalbill= 50*0.50 +100*0.75 +(unitcharge-150)*1.20;
	}
	else{
		totalbill= 50*0.50 +100*0.75 +100*1.20 +(unitcharge-250)*1.50;
	}
	totalbill += totalbill*0.20;
	printf("Total electrivity bill: Rs %f", totalbill);
}
