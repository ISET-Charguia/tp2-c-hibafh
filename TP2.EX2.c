/*
 ============================================================================
 Name        : EX2.c
 Author      : hiba farhat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main() {
	float r ;
	printf (" donner un réel");
	scanf ("%f",&r);
	if (r<0)
		r=r*(-1);
		else
			r=r*(1);
	printf ("la valeur absolue est: %2.2f",r);
	return 0;
}
