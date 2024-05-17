#include <stdio.h>

void main(){
	int student[20][2];
	int i=0;
	
	for(i=0; i<20; i++){
		printf("Enter the roll number for student %d:", i+1);
		scanf("%d", &student[i][0]);
	
	printf("Enter the marks for student %d:", i+1);
	scanf("%d", &student[i][1]);
}
printf("\n Student Data: \n");
printf("Roll Number\t Marks \n");

for(i=0; i<20; i++){
	printf("%d \t\t %d\n", student[i][0], student[i][1]);
}
}
