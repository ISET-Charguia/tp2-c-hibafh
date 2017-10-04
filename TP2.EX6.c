/*
 ============================================================================
 Name        : EX6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
	int a,b,c ;
	printf("donner 3 variables ");
	scanf("%d %d %d",&a,&b,&c);

	if ((a<b)&&(a<c))
		printf("d est le minimum \n",a);
		else
			if ((b<a)&&(b<c))
		printf (" %d est le minimum \n",b);
		else
			printf("%d est le minimum \n",c);
		if ((a>b)&&(a>c))
			printf("%d est le maximum \n",a);
			else if ((b>a)&&(b>c))
			printf ("%d est le maximum \n",b);
			else
				printf("%d est le maximum \n",c);
	return 0;
}
