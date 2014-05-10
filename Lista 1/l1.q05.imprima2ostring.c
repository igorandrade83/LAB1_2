#include "stdio.h"

int main ()
{
	char palavra1[20], palavra2[20];
	printf("digite primeira palavra: ");
	scanf("%s",&palavra1);
	printf("digite segunda palavra: ");
	scanf("%s",&palavra2);
	
	printf("%s e %s", palavra1, palavra2);
	
	printf("\nsegundas letras: %c e %c",palavra1[1], palavra2[1]);
	
	return 0;
}

