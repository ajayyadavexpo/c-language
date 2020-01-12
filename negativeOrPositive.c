#include <stdio.h>
int main(){
	int n;
	printf("Enter number to get the negative or positive :");
	scanf("%d",&n);
	if(n > 0){
		printf("Positive number \n");
	}else if(n == 0){
		printf("Zero\n");
	}
	else{
		printf("Negative Number\n");
	}
}