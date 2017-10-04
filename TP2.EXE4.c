/*
 ============================================================================
 Name        : EXE4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main()
{
	int a;
	printf("saisir l'année");
	scanf("%d",&a);
	if
		((a%4==0) && (a%100 != 0))
	 printf("cette annee est bissextile");
		else
		printf ("cette année n'est pas bissextile");
	return 0;
}
