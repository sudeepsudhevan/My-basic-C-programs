/*
 ============================================================================
 Name        : array.c
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
	int i,searchkey,limit,flag=0;
	setbuf(stdout,NULL);
	printf("Enter the limit: ");
	scanf("%d",&limit);

	printf("Enter the values: ");
	for(i=0;i<limit;i++){
		scanf("%d",&values[i]);
	}
	printf("Enter the Search key: ");
	scanf("%d",&searchkey);
	for(i=0;i<limit;i++){
		if(searchkey==values[i]){
		    flag=1;
			break;
		}

	}
	if(flag==1){
		printf("value is found at %d position",i+1);

	}else{
		printf("value not found");
	}

	return EXIT_SUCCESS;
}
