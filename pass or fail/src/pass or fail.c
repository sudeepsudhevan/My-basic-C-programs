/*
 ============================================================================
 Name        : pass.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float mark;
	setbuf(stdout,NULL);
	printf("Enter your mark");
	scanf("%f",&mark);
	if(mark<50){
		printf("failed");

	}else if(mark<=100){
		printf("passed");
	}else{
		printf("enter correctly");
	}
	return EXIT_SUCCESS;
}
