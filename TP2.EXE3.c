/*
 ============================================================================
 Name        : EXE3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
int main() {
	int a,b;
	float x;
	printf ("saisir votre a");
	scanf ("%d",&a);
	printf ("saisir votre b");
	scanf ("%d",&b);
	if (a!=0)
		{x=(float)(-b)/a;
	printf("%2.2f est la solution de cette équation",x);}
	else
		{printf("cette équation n'a pas de solution");}
return 0 ;
}
