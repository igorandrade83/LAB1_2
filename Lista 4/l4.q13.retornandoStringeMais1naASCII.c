#include<stdio.h>
#include<string.h>
#define tam 50

char *mais()
{
	int i;
	char *txt;
	txt = (char *) malloc(sizeof(char)*tam);
	//Cria um ponteiro do tipo char(*txt) e depois aloca 50(tam) espa�os de char e
	//informa o endere�o pro ponteiro.
	
	gets(txt);
	
	for(i=0; i<strlen(txt); i++)
		txt[i] = txt[i]+1;

	return txt;	
}

int main()
{

	puts(mais());	
	system("pause");	
	return 0;
}
