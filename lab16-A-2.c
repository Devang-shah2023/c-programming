 #include <stdio.h>
 void main(){
 	int arr[3][3], i, j, countpos=0, countneg=0, countzero=0;
 	
 	for(i=0; i<3; i++){
 		for(j=0; j<3; j++){
 		printf("Enter the elements of %d %d of matrix=", i, j);
 		scanf("%d", &arr[i][j]);
	 }
}
	 
	 printf("matrix is=\n");
	 for(i=0; i<3; i++){
	 	for(j=0; j<3; j++){
	 		printf("%d", arr[i][j]);
		 }
		 printf("\n");
	 }
	 for(i=0; i<3; i++){
	 	for(j=0; j<3; j++){
	 		if(arr[i][j]<0){
	 			countneg++;
			 }
			 else if(arr[i][j]>0){
			 	countpos++;
			 }
			 else{
			 	countzero++;
			 }
		 }
	 }
	 printf("negative numbers= %d\n positive numbers=%d\n total zero=%d\n", countneg, countpos, countzero);
 }
