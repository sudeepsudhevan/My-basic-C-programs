/*
 ============================================================================
 Name        : Reverse.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,limit;
	setbuf(stdout,NULL);
	printf("Enter the limit: ");
	scanf("%d",&limit);
	for(i=limit;i>=1;i--){
		for(j=0;j<i;j++){
			printf("* ");

		}
		printf("\n");

	}

	return EXIT_SUCCESS;
}
