/*
 ============================================================================
 Name        : break.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,choice,n=10;
	setbuf(stdout,NULL);
	printf("1 for break\n2 for switch\nEnter your choice: ");
	scanf("%d",&choice);

	if(choice==1){

	for(i=1;i<=n;i++){
		printf("Hi ");
		if(i==5){
			break;
		}
		printf("Hello\n");
	}
	printf("\nfinished");



	}else if(choice==2){

		for(i=1;i<=n;i++){
			printf("Hi ");
			if(i==5){
				printf("\n");
				continue;
			}
			printf("Hello\n");
		}
		printf("finished");
	}

	return EXIT_SUCCESS;
}
