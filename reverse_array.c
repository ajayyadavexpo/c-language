#include <stdio.h>
int main(){
	int a[5]={2,1,8,6,7},b[5],n=5,m=0,i=0,j=0;
	printf("\nArray is : ");
	while(i<5){
		printf("\t %d",a[i]);
		i++;
	}
	while(n > 0){
		b[m] = a[n-1];
		n--;
		m++;
	}
	printf("\nReverse Array :");
	while(j < 5){
		printf("\t %d",b[j]);
		j++;
	}
}