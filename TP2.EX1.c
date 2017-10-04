/*
 ============================================================================
 Name        : EX1.c
 Author      : hiba farhat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main ()
{
	int e ;
	printf("donner un entier");
	scanf("%d",&e);
	if (e%3==0)
	printf("%d est divisible par 3",e);
	else
		printf("%d  n'est pas divisible par 3",e);
	return 0 ;
}
