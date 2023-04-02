/*
 ============================================================================
 Name        : No.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,limit,values[100],count=0;
	setbuf(stdout,NULL);
	printf("Enter the size of an array: ");
	scanf("%d",&limit);

	printf("Enter the values of array: ");
	for(i=0;i<limit;i++){
		scanf("%d",&values[i]);
	}
	for(i=0;i<limit;i++){
		if(values[i]%2==0){
			count=count+1;
		}
	}
	printf("Number of even numbers in the given array is %d",count);
	return EXIT_SUCCESS;
}
