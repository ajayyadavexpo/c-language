#include <stdio.h>
int main(){
	int array[6] = {4,6,4,3,6,7},n=6,i=0,j=0,new_array[6],duplicate,k=0;
	printf("Original array : ");
	for (int i = 0; i < n; i++)
	{
		printf("%d \t", array[i]);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if(array[i] == array[j]){
				duplicate = 1;
			}
		}
		if(duplicate != 1){
			new_array[k] = array[i];
			k++;
		}
	}
	printf("\nAfter Removing Duplicates : ");
	for (int i = 0; i <= k; i++)
	{
		printf("%d\t", new_array[i]);
	}
}