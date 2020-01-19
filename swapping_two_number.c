#include <stdio.h>
int main(){
	int a=10,b=20;
	printf("Before swapping : \nA : %d",a);
	printf("\nB : %d",b);
	a = a+b;
	b = a-b;
	a = a-b;
	printf("\nAfter swapping : \nA : %d",a);
	printf("\nB : %d",b);
}