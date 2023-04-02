/*
 ============================================================================
 Name        : basicmathschoose.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2,choice,result;
	setbuf(stdout,NULL);
	printf("Enter two number");
	scanf("%d%d",&num1,&num2);
	printf("1 for Addition\n2 for Subtraction\n3 for multiplication\n4 for Division\nenter your choice");
	scanf("%d",&choice);
	if(choice==1){
		result=num1+num2;
		printf("Result is= %d",result);
	}else if(choice==2){
		result=num1-num2;
		printf("Result is= %d",result);
	}else if(choice==3){
		result=num1*num2;
		printf("Result is= %d",result);
	}else if(choice==4){
		result=num1/num2;
		printf("Result is= %d",result);
	}else{
		printf("fool!!!!");
	}

	return EXIT_SUCCESS;
}
