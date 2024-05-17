#include <stdio.h>

void main(){
	int n, sum=0, i=1;
	
	printf("Enter a positive integer 'n': ");
	scanf("%d", &n);
	
	if(n<=0){
		printf("Please eneter a positive integer");
	}else{
	printf("Sum of series is ", n);
	
	for(i=1; i<=n; i++){
		sum+=i*i;
	}
}
printf("%d\n", sum);
}
