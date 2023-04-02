/*
 ============================================================================
 Name        : student.c
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
	printf("Enter your mark percentage: ");
	scanf("%f",&mark);
	if(mark<=0||mark>100){
		printf("Please Enter correctly");
	}else if(mark>=90){
		printf("your grade is A");
	}else if(mark>=80){
		printf("your grade is B");
	}else if(mark>=70){
		printf("your grade is C");
	}else if(mark>=60){
		printf("your grade is D");
	}else if(mark>=50){
		printf("your grade is E");
	}else{
		printf("Failed");
	}
	return EXIT_SUCCESS;
}
