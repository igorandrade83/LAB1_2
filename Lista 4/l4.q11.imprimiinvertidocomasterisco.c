#include<stdio.h>
#include<string.h>
#define tam 100

void inverte(char *frase)
{
	int i=0;
	char aux;
	
	for(i=0; i< (strlen(frase)+1)/2 ; i++)
	{
		aux = frase[i];
		frase[i] = frase[strlen(frase)-i-1];
		frase[strlen(frase)-i-1] = aux;
	}
	
	for(i=0; i< strlen(frase)+1 ; i++)
		if(frase[i] == 'A' || frase[i] == 'a')
			frase[i] = '*';
	return;
}



void recebe()
{
	char txt1[tam], txt2[tam];
	gets(txt1);
	gets(txt2);
	inverte(txt1);
	inverte(txt2);
	puts(txt1);
	puts("\n");
	puts(txt2);
	return;
}

int main()
{
	recebe();	
	system("pause");	
	return 0;
}
