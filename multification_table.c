#include <stdio.h>
int main(){
	int i,n;
	printf("\nEnter a number to get the table : ");
	scanf("%d",&n);
	for (int i = 1; i <=10; ++i)
	{
		printf("\n %d * %d is : %d",i,n,i*n);
	}
}