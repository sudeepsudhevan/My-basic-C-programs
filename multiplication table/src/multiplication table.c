/*
 ============================================================================
 Name        : multiplication.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,number,result=0;
	setbuf(stdout,NULL);
	printf("Enter a number: ");
	scanf("%d",&number);
	for(i=1;i<=10;i++){
		result=i*number;
		printf("%d * %d = %d \n",i,number,result);
	}
	return EXIT_SUCCESS;
}
