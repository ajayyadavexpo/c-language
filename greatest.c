#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter Three numbers to get the greatest : \n");
	scanf("%d %d %d",&a,&b,&c);
	if (a > b && a >c)	
	{
		printf("%d is the greatest\n", a);
	}
	else if (b > c)
	{
		printf("%d is the greatest \n", b);
	}else{
		printf("%d is the greatest\n", c);
	}
}

