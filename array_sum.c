#include <stdio.h>
int main(){
	int array[100],n,i,sum=0;
	printf("How many numbers to sum : ");
	scanf("%d",&n);
	printf("\nEnter %d numbers\n", n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&array[i]);
		sum += array[i];
	}
	printf("\nSum : %d ",sum);
}