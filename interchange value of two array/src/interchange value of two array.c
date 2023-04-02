/*
 ============================================================================
 Name        : interchange.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,limit,First[100],Second[100];
	setbuf(stdout,NULL);
	printf("Enter the size of Array: ");
	scanf("%d",&limit);

	printf("Enter the Values of Array 1: ");
	for(i=0;i<limit;i++){
		scanf("%d",&First[i]);
	}

	printf("Enter the Values of Array 2: ");
	for(i=0;i<limit;i++){
		scanf("%d",&Second[i]);
	}
	for(i=0;i<limit;i++){
		First[i]=First[i]+Second[i];
		Second[i]=First[i]-Second[i];
		First[i]=First[i]-Second[i];
	}
	printf("Arrays after swapping: ");

	printf("\nArray1: ");
	for(i=0;i<limit;i++){
		printf("%d\t",First[i]);
	}
	printf("\nArray2: ");
	for(i=0;i<limit;i++){
		printf("%d\t",Second[i]);
	}
	return EXIT_SUCCESS;
}
