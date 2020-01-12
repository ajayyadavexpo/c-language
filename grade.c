/*
Less than 40 = failed
40-60 = pass
60-80 = First class
80-100 = Distinction
Any other Invalid marks input
*/
#include <stdio.h>
int main(){
	int marks;
	printf("Enter Your Mark : ");
	scanf("%d",&marks);
	if(marks >= 0 && marks < 40){
		printf("Failed\n");
	}
	else if(marks >= 40 && marks < 60){
		printf("Pass\n");
	}
	else if (marks >= 80 && marks <= 100)
	{
		printf("Distinction\n");
	}else{
		printf("Invalid mark\n");
	}
}



