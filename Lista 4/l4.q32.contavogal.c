#include<stdio.h>
#include<string.h>
#define tam 100

/* Recebe um string e imprime sem vogal */

int tiravogal(char *txt, char *letra)
{
	int i=0, cont=0;
	while(i < strlen(txt))
	{
		//qnd txt[i] é uma vogal, ele entra no if conta e substitui;
		if(txt[i] == 'a' || txt[i] == 'e' || txt[i] == 'i' || txt[i] == 'o' || txt[i] == 'u' || txt[i] == 'A' || txt[i] == 'E' || txt[i] == 'I' || txt[i] == 'O' || txt[i] == 'U' )
		{
			cont++;
			txt[i] = *letra;	
			i++;
		}
		else
			i++;	
	}
	return cont;	
}

void recebe()
{
	char * txt;
	char caracter;
	
	txt = (char *)malloc(sizeof(char)*tam);
	
	printf("Informe frase: ");
	gets(txt); 
	printf("Informe qual caractere deseja substituir: ");
	scanf("%c", &caracter);
	printf("Numero de vogais: %d\n",tiravogal(txt,&caracter));
	printf("\nNova Frase: %s\n", txt);
	return;	
}

int main()
{

	recebe();
	system("pause");	
	return 0;
}
