/*
 ============================================================================
 Name        : function.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sum();
int main(void) {
	int c;
	c=sum();
	printf("Sum is %d",c);

	return EXIT_SUCCESS;
}
int sum(){
	int a,b,result;
	setbuf(stdout,NULL);
	printf("Enter two values: ");
	scanf("%d%d",&a,&b);
	result=a+b;
	return result;
}
