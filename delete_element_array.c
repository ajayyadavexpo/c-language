#include<stdio.h>
int main(){
	int array[5],index;
	printf("Enter Array Elements : \n");
	for (int i = 0; i < 5; i++)
	{
		scanf("%d",&array[i]);
	}
	printf("\nArray is : ");
	for (int i = 0; i < 5; i++)
	{
		printf(" %d", array[i]);
	}

	printf("\nEnter Index number to delete the element : ");
	scanf("%d",&index);
	if (index < 5)
	{
		for (int i = index; i < 4; i++)
		{
			array[i] = array[i+1];
		}
	}else{
		printf("\n Out of range");
		return 0;
	}
	printf("\nAfter Sorting the numers : ");
	for (int i = 0; i < 4; i++)
	{
		printf(" %d", array[i]);
	}
	return 0;

}