/*
 ============================================================================
 Name        : EX5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
	int e,c,d,u ;
	printf("donnez un entier positif inférieur à 999");
	scanf("%d",&e);
	c=(e/ 100) ;
	d=((e% 100)/ 10) ;
	u=(e%10);
	printf("le nombre de centaine est: %d \n",c);
	printf("le nombre de dizaine est: %d \n",d);
	printf("le nombre d'unité est: %d \n",u);

	return 0;
}
