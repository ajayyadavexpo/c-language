#include <stdio.h>
int main(){
	int array[5],i,j,temp;
	printf("Enter the array elements : \n");
	for (int i = 0; i < 5; i++)
	{
		scanf(" %d",&array[i]);
	}
	printf("\nData before sorting : ");
	for (int i = 0; i < 5; i++)
	{
		printf(" %d", array[i]);
	}
	// Sorting function 
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if(array[j] < array[i]){
				temp = array[j];
				array[j] = array[i];
				array[i] = temp;
			}
		}
	}
	printf("\nSorted array : ");
	for (int i = 0; i < 5; i++)
	{
		printf(" %d", array[i]);
	}
	return 0;
}