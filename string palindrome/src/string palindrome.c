/*
 ============================================================================
 Name        : string.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int i,length,flag=0;
	char str[20];
	setbuf(stdout,NULL);
	printf("Enter a string: ");
	scanf("%s",str);
	length=strlen(str);


	for(i=0;i<length;i++){
		if(str[i]!=str[length-i-1]){
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("%s is a palindrome",str);
	}else{
		printf("%s is not a palindrome",str);
	}




	return EXIT_SUCCESS;
}
