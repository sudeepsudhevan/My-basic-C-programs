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
	int day;
	setbuf(stdout,NULL);
	printf("Enter the day from 1 - 7: ");
	scanf("%d",&day);
	switch(day){
	case 1:
		printf("Day %d of the week is Sunday",day);
		break;
	case 2:
		printf("Day %d of the week is Monday",day);
		break;
	case 3:
		printf("Day %d of the week is Tuesday",day);
		break;
	case 4:
		printf("Day %d of the week is Wednesday",day);
		break;
	case 5:
		printf("Day %d of the week is Thursday",day);
		break;
	case 6:
		printf("Day %d of the week is Friday",day);
		break;
	case 7:
		printf("Day %d of the week is Saturday",day);
		break;
	default:
		printf("Invalid Entry");
	}
	return EXIT_SUCCESS;
}
