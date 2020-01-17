// Sum of Natural Numbers Using Recursion
#include <stdio.h>
int sum(int n){
	if(n>0){
		return n + sum(n-1);
	}else{
		return n;
	}
}
int main(){
	int n,result;
	printf("Enter Number to get the sum of the nautral number : ");
	scanf("%d",&n);
	if(n>1){
		result = sum(n);
		printf("\nSum is : %d",result);
	}else{
		printf("\nPlease Enter right number");
	}
}
