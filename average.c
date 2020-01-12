#include<stdio.h>
int main(){
	int a,b,c;
	float average = 0;
	printf("Enter three numbers to get the average \n");
	scanf("%d %d %d",&a,&b,&c);
	printf("Numbers are : %d , %d , %d \n",a,b,c);
	average = (a+b+c)/3;
	printf("average is %f \n", average);
}	