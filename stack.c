#include <stdio.h>
#define SIZE 5
void push(int);
void pop();
int isEmpty();
int isFull();
void peek();

int top = -1;
int stack[SIZE];

int isEmpty(){
	if(top == -1){
		return 1;
	}else{
		return 0;
	}
}

int isFull(){
	if(top == SIZE-1){
		return 1;
	}else{
		return 0;
	}
}

void push(int data){
	if(isFull()){
		printf("\nStack is Overflow");
	}else{
		top = top+1;
		printf("\nEntered : %d",data);
		stack[top] = data;
	}
}


void pop(){
	int data;
	if (isEmpty())	
	{
		printf("\nStack is Empty");
	}else{
		data = stack[top];
		top--;
		printf("\nDeleted Item : %d ",data);
	}
}


void peek(){
	if(isEmpty()){
		printf("\nStack is Empty");
	}else{
		printf("\nTop Element is : %d ",stack[top]);
	}
}

void display(){
	if(isEmpty()){
		printf("\nStack is Empty");
	}else{
		for (int i = top+1; i >= 0; i--)
		{
			printf("\t %d",stack[i]);
		}
	}
}




int main(){
	int choice,data;
	menu:
	printf("\n1. Push \t 2.Pop \t 3. peek \t 4. Disply \t 5. Exit\n");
	scanf("%d",&choice);
	if(choice == 1){
		printf("\nEnter Element to add : ");
		scanf("%d",&data);
		push(data);
		goto menu;
	}else if(choice == 2){
		pop();
		goto menu;
	}else if(choice == 3){
		peek();
		goto menu;
	}else if(choice == 4){
		display();
		goto menu;
	}else if(choice == 5){
		printf("\nThank you");
	}else{
		printf("\nPlease Enter Vaid number");
		goto menu;
	}
}