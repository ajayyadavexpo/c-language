#include <stdio.h>
#define SIZE 5


void enQueue(int);
void deQueue();
void display();


int items[SIZE], front = -1, rear = -1;


void enQueue(int value){
    if(rear == SIZE-1)
        printf("\nQueue is Full!!");
    else {
        if(front == -1)
            front = 0;
        rear++;
        items[rear] = value;
        printf("\nInserted -> %d", value);
    }
}
void deQueue(){
    if(front == -1)
        printf("\nQueue is Empty!!");
    else{
        printf("\nDeleted : %d", items[front]);
        front++;
        if(front > rear)
            front = rear = -1;
    }
}
void display(){
    if(rear == -1)
        printf("\nQueue is Empty!!!");
    else{
        int i;
        printf("\nQueue elements are:\n");
        for(i=front; i<=rear; i++)
            printf("%d\t",items[i]);
    }
}
int main(){
	int choice,data;
	menu:
	printf("\n1. EnQueue \t 2.DeQueue \t 3. Disply \t 4. Exit\n");
	scanf("%d",&choice);
	if(choice == 1){
		printf("\nEnter Element to add : ");
		scanf("%d",&data);
		enQueue(data);
		goto menu;
	}else if(choice == 2){
		deQueue();
		goto menu;
	}else if(choice == 3){
		display();
		goto menu;
	}else if(choice == 4){
		printf("\nThank you");
	}else{
		printf("\nPlease Enter Vaid number");
		goto menu;
	}
}