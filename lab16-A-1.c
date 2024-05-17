#include <stdio.h>

void main(){
	int col, row, i, j;
	
	printf("Enter the number of rows:");
	scanf("%d", &row);
	
	printf("Enter the number of columns:");
	scanf("%d", &col);
	
	int arr[row][col];
	
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			printf("enter the elements %d %d of matrix= ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
	printf("matrix is=\n");
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			printf(" %d", arr[i][j]);
		}
		printf("\n");
	}
}
