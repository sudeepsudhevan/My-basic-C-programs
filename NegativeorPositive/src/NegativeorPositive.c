/*
 ============================================================================
 Name        : NegativeorPositive.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	setbuf(stdout,NULL);
	printf("Enter a number");
	scanf("%d",&num);
	if(num<0){
		printf("number is negative");
	}else{
		printf("number is positive");
	}

	return EXIT_SUCCESS;
}

