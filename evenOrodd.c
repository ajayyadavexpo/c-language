#include <stdio.h>
int main(){
	int n;
	printf("Enter number to get even or odd :\n");
	scanf("%d",&n);
	if(n % 2 == 0){
		printf("Number is Even\n");
	}else{
		printf("ODD Number\n");
	}
}