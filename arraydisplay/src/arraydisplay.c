/*
 ============================================================================
 Name        : arraydisplay.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void getArray(int);
void displayArray(int);

int main(void) {
	setbuf(stdout,NULL);
	int limit;
	printf("Enter the size of the array: ");
	scanf("%d",&limit);
	getArray(limit);
	displayArray(limit);

	return EXIT_SUCCESS;
}
void getArray(int limit1){
	int array1[20],i;
	printf("Enter values to the array:  ");
	for(i=0;i<limit1;i++){
		scanf("%d",&array1[i]);
	}


}
void displayArray(int limit2){
	int array2[20],i;
	printf("Array is: \n");
	for(i=0;i<limit2;i++){
		printf("%d\t",array2[i]);
	}

}
