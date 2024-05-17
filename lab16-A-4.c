#include <stdio.h>

void main(){
	int rows, columns, i, j;
	
	printf("Enter the number of rows:");
	scanf("%d", &rows);
	printf("Enter the number of columns:");
	scanf("%d", &columns);
	
	int m1[rows][columns];
	int m2[rows][columns];
	int result[rows][columns];
	
	printf("Enter elements of the first matrix: \n");
	for(i=0; i<rows; i++){
		for(j=0; j<columns; j++){
			scanf("%d", &m1[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter the elements of second matrix: \n");
	for(i=0; i<rows; i++){
		for(j=0; j<columns; j++){
			scanf("%d", &m2[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<rows; i++){
		for(j=0; j<columns; j++){
			result[i][j]= m1[i][j]+ m2[i][j];
		}
	}
	printf("Resultant matrix after addition: \n");
	for(i=0; i<rows; i++){
		for(j=0; j<columns; j++){
			printf("%d\t", result[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
