#include <stdio.h>
#include <time.h>

void main(){
	time_t currenttime;
	
	time(&currenttime);
	printf("Current Date & Time:", ctime(&currenttime));

}
