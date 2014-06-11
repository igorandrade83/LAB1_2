#include<stdio.h>


void receba(int *vet)
{
	int i;

	for (i=0;i<5;i++)
		printf("%d",*(vet+i));

	return;
}


