#include<stdio.h>
#include<string.h>
#define tam 100

/* Recebe um string e imprime sem vogal */

void imprimi(char *txt)
{
	if(txt[0] == 'a' || txt[0] == 'A')
		printf("%s\n", txt);
	else
		printf("Nao comeca com 'a'.\n");
	return ;	
}

void recebe()
{
	char * txt;
	
	txt = (char *)malloc(sizeof(char)*tam);
	
	printf("Informe nome: ");
	gets(txt); 
	imprimi(txt);
	return;	
}

int main()
{

	recebe();
	system("pause");	
	return 0;
}
