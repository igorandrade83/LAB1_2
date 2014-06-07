#include<stdio.h>
#include<string.h>
#define tam 100

/* Recebe um string e imprime sem vogal */

void troca(char *txt)
{
	int tamain, i=0;
	char aux;
	tamain = strlen(txt);
	for(i=0; i< (tamain/2) ; i++)
	{
		aux = txt[i];
		txt[i] = txt[strlen(txt)-i-1];
		txt[strlen(txt)-i-1] = aux;
	}
	printf("\nNova Frase TESTE: %s\n", txt);
	return ;	
}

void recebe()
{
	char * txt;
	
	txt = (char *)malloc(sizeof(char)*tam);
	
	printf("Informe frase: ");
	gets(txt); 
	troca(txt);
	printf("\nNova Frase: %s\n", txt);
	return;	
}

int main()
{

	recebe();
	system("pause");	
	return 0;
}
