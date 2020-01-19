#include <stdio.h>
int main(){
	int n,i,mid;
	printf("\nEnter number to get the factors : ");
	scanf("%d",&n);
	if(n % 2 == 0){
	    mid = n/2;
	}else{
		mid = (n+1)/2;
	}
	printf("\nFactors : ");
	for (i = 1; i <= mid; i++)
	{
		if(n % i == 0){
			printf("\n\t\t\t %d",i);
		}
	}
}