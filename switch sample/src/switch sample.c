/*
 ============================================================================
 Name        : switch.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int choice;
	setbuf(stdout,NULL);
	printf("1 for Biriyani\n2 for Porota\n3 for fried rice\n4 for appam\nEnter your choice");
	scanf("%d",&choice);
	switch(choice){
	case 1:
		printf("you have selected Biriyani");
		break;
	case 2:
		printf("you have selected Porota");
		break;
	case 3:
		printf("you have selected fried rice");
		break;
	case 4:
		printf("you have selected appam");
		break;
	default:
		printf("fool");
	}
	return EXIT_SUCCESS;
}
