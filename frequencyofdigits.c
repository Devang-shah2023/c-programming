#include <stdio.h>

void main(){
	int num, digit;
	int c0=0, c1=0, c2=0, c3=0, c4=0, c5=0, c6=0, c7=0, c8=0, c9=0;
	
	printf("Enter an integer");
	scanf("%d", &num);
	
	if(num<0){
		num=-num;
	}
	
	while(num>0){
		digit= num%10;
	switch(digit){
		
		case 0:
			c0++;
			break;
	   case 1:
		    c1++;
		    break;
		case 2:
		    c2++;
			break;
		case 3:
		    c3++;
			break;
	    case 4:
		    c4++;
			break;
		case 5:
		    c5++;
			break;
	    case 6:
	    	c6++;
	    	break;
	    case 7:
	    	c7++;
	    	break;
	    case 8:
	    	c8++;
	    	break;
	    case 9:
	    	c9++;
	    	break;
}
num/=10;
}
printf("Digit Frequency:");

if(c0>0)printf("0: %d times\n", c0);
if(c1>0)printf("1: %d times\n", c1);
if(c2>0)printf("2: %d times\n", c2);
if(c3>0)printf("3: %d times\n", c3);
if(c4>0)printf("4: %d times\n", c4);
if(c5>0)printf("5: %d times\n", c5);
if(c6>0)printf("6: %d times\n", c6);
if(c7>0)printf("7: %d times\n", c7);
if(c8>0)printf("8: %d times\n", c8);
if(c9>0)printf("9: %d times\n", c9);
}
