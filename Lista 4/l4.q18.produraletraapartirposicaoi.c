#include<stdio.h>
#include<ctype.h>
#define tam 30

int procura(char *frase, char *letra, int *N)
{
	int i,cont=0;
	
	for (i=*N;i<strlen(frase);i++)
	{
		if(tolower(frase[i]) == tolower(*letra))
			return cont = i;
	}

	return cont;
}

int recebe()
{
	char frase[tam];	
	char letra;
	int i;
	
	printf("Informe frase: ");
	gets(frase);
	printf("Informe letra procurada: ");
	scanf("%c", &letra);
	printf("A partir da posicao: ");
	scanf("%d", &i);
	return procura(frase, &letra, &i);
}

int main()
{
	int aux = recebe();
	
	if(aux == 0)
		printf("Nao consta o caractere procurado na frase a partir da posicao i.\n");
	else
		printf("Proximo caractere na posicao: %d\n",aux);
	system("pause");
	return 0;
}
