/*
 ============================================================================
 Name        : Add.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,n,Array1[10][10],Array2[10][10],sum[10][10];
	setbuf(stdout,NULL);
	printf("Enter the size of arrays");
	scanf("%d",&n);
	printf("Enter the values of array 1: \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&Array1[i][j]);
		}

	}
	printf("Enter the values of array 2: \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&Array2[i][j]);
		}

	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			sum[i][j]=Array1[i][j]+Array2[i][j];
		}

	}
	printf("Sum of 2 arrays is: \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
