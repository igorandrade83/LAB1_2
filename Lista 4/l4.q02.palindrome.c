#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define tam 100

/********** ATENCAO ***********

O programa nao trata vogais com acento.
Porém trata caracteres especiais( !@#$%¨&*+_-/*() ) e espaços.

retornará 1 em caso de palindrome e 0 caso não seja.
*********** ATENCAO **********/


void tira_espaco(char *txt_ver);
int cria_string();
int verifica_palindrome(char *txt_ver);



int main()
{
	int resultado = cria_string();
	printf("\n %d.",resultado);
	system("pause");	
	return resultado;
}

int cria_string() // Recebe a string e envia para verificar se é um palindrome.
{
	char txt_ver[tam];
	printf("informe o texto: ");
	scanf("%[^\n]s", &txt_ver);
	return verifica_palindrome(txt_ver);
}


int verifica_palindrome(char *txt_ver) // retira os espaços e faz a verificação, retorna 1 caso seja.
{
	int i, fim=-1;
	
	tira_espaco(txt_ver);

	for(i=0;i<strlen(txt_ver)/2;i++)
	{
		if (txt_ver[i] == txt_ver[strlen(txt_ver)-i-1]) //se for palindrome 'fim' recebe sempre 1 e no final retorna, se não for, retornara 0;
			fim=1;
		else
			return 0;
	}
	return fim;
}

void tira_espaco(char *txt_ver) // Retira os espaços e caracteres que não esteja entre 'a' e 'z' e ajusta o strlen da frase para o novo tamanho.
{
	int i=0,j=0;
	char aux2;

	while(i < strlen(txt_ver))
	{
		txt_ver[i] = tolower(txt_ver[i]); // transforma as letras em minuscula.
		if (txt_ver[i] == ' ' || (txt_ver[i] < 'a') || (txt_ver[i] > 'z')) //se o caractere não estiver entre 'a' e 'z' entra e apaga este caractere.
		{
			j=i;
			aux2 = strlen(txt_ver);
			while(j<strlen(txt_ver)+1)
			{
				txt_ver[j] = txt_ver[j+1];
				j++;
			}
			txt_ver[aux2] = '\0';
		}
		if(txt_ver[i] == ' ' || (txt_ver[i] < 'a') || (txt_ver[i] > 'z'))
			continue;
		else
			i++;
		
	}

	return;
}
