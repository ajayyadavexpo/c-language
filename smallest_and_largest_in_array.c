#include <stdio.h>
int main(){
	int array[5]={2,5,3,7,5},n=5,i,smallest,largest;
	printf("List : \n");
	smallest = array[0];
	largest = array[0];
	for (int i = 0; i < n; i++)
	{
		printf("%d\t",array[i]);
	}
	for (int i = 0; i < n; i++)
	{
		if(array[i]<smallest){
			smallest = array[i];
		}
		if(array[i]>largest){
			largest = array[i];
		}
	}
	printf("\nLarget : %d \t Smallest : %d",largest,smallest);
}