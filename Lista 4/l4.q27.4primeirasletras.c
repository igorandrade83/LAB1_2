#include<stdio.h>
#include<string.h>
#define tam 100

/* Recebe um string e imprime sem vogal */

void conta(char *txt)
{
	int cont=0,i=0;
	
	for(i=0;i<4;i++)
	{
		printf("%c",txt[i]);
	}
	printf("\n");
	return;	
}

void recebe()
{
	char * txt;
	
	txt = (char *)malloc(sizeof(char)*tam);
	
	printf("Informe nome: ");
	gets(txt); 
	conta(txt);
	return;	
}

int main()
{

	recebe();
	system("pause");	
	return 0;
}
