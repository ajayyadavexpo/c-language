#include <stdio.h>
int main(){
	int number,expo,i;
	printf("\nEnter number and exponential : ");
	scanf("%d\n %d",&number,&expo);
	for (int i = 2; i <= expo; i++)
	{
		number = number*expo;
	}
	printf("\nSolution :  %d",number);
}