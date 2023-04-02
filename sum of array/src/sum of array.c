/*
 ============================================================================
 Name        : sum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int values[100];
	int sum=0,i,limit;
	setbuf(stdout,NULL);
	printf("Enter the limit: ");
	scanf("%d",&limit);
	printf("Enter the values: ");
	for(i=0;i<limit;i++){
		scanf("%d",&values[i]);

	}
	for(i=0;i<limit;i++){
		sum=sum+values[i];
	}
	printf("sum is= %d",sum);
	return EXIT_SUCCESS;
}
