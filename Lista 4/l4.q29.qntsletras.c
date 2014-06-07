#include<stdio.h>
#include<string.h>
#define tam 100

/* Recebe um string e imprime sem vogal */

int conta(char *txt)
{
	int cont=0,i=0;
	
	while(txt[i] != '\0')
	{
		if(txt[i] != ' ')
			cont++;
		i++;
	}
	return cont;	
}

void recebe()
{
	char * txt;
	
	txt = (char *)malloc(sizeof(char)*tam);
	
	printf("Informe nome: ");
	gets(txt); 
	printf("Possui %d letras", conta(txt));
	return;	
}

int main()
{

	recebe();
	system("pause");	
	return 0;
}
