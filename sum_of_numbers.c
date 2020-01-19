#include <stdio.h>
int main(){
	int n,i,sum;
	printf("\nEnter number to get the sum : ");
	scanf("%d",&n);
	sum = n*(n+1);
	sum = sum/2;
	printf("\nSum of %d is : %d",n,sum);
	/* 
	OR You can get the sum with loop
	*/
	while(n != 0){
		sum += n;
		n--;
	}
	printf("\nSum is : %d",sum);
}