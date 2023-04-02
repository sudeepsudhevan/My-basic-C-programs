/*
 ============================================================================
 Name        : post.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,choice;
	setbuf(stdout,NULL);
	printf("Enter a number: ");
	scanf("%d",&a);
	printf("1 for Post increment b=a++\n2 for Pre increment b=++a\n3 for Post Decrement b=a--\n4 for Pre Decrement b=--a\nEnter your Choice");
	scanf("%d",&choice);
	switch(choice){
	case 1:
		b=a++;
		printf("After Post increment value in b= %d and value in a= %d",b,a);
		break;
	case 2:
		b=++a;
		printf("After Pre increment value in b= %d and value in a= %d",b,a);
		break;
	case 3:
		b=a--;
		printf("After Post Decrement value in b= %d and value in a= %d",b,a);
		break;
	case 4:
		b=--a;
		printf("After Pre Decrement value in b= %d and value in a= %d",b,a);
		break;
	default:
		printf("Invalid entry");

	}
	return EXIT_SUCCESS;
}
