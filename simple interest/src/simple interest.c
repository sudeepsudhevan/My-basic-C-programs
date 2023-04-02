/*
 ============================================================================
 Name        : simple.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int P;
	float R,n,SI;
	setbuf(stdout,NULL);
	printf("Enter the Principal Amount: ");
	scanf("%d",&P);
	printf("Enter the interest: ");
	scanf("%f",&R);
	printf("Enter number of year of loan: ");
	scanf("%f", &n);
	SI=(P*R*n/100);

	printf("simple interest is:%f",SI); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
