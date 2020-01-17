#include<stdio.h>
void display(){
	static int c = 1;
	c += 2;
	printf("\t %d",c);
}
int main(){
	display();
	display();
}