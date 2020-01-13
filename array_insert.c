#include <stdio.h>
int main(){
	int array[5],no,pos;
	printf("Enter Array Elemets : \n");
	for (int i = 0; i < 5; i++)
	{
		scanf("%d",&array[i]);
	}
	printf("\nStored Data : ");
	for (int i = 0; i < 5; i++)
	{
		printf(" %d", array[i]);
	}
	printf("\nEnter position for entering new element : ");
	scanf("%d",&pos);
	if(pos < 5){
		printf("\nEnter ths Element at %d index : ", pos);
		scanf("%d",&no);
		array[pos] = no;
	}else{
		printf("Out of range");
	}
	printf("\nStored data in array : ");
	for (int i = 0; i < 5; i++)
	{
		printf(" %d", array[i]);
	}

}