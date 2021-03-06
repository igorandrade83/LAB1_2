#include <stdio.h>
#include <string.h>
/*
* Usuario informa nome do arquivo e palavra, o programa pesquisa qnts vezes a palavra apareceu no arquivo.
*/
void ChamaFuncoes();
int LeePesquisaArquivo(FILE *arquivo1, char *pesq);


int main()
{
	ChamaFuncoes();

	system("pause");
	return 0;
}

void ChamaFuncoes()
{
	char NomeArquivo[200];
	char palavra[20];
	FILE *arquivo1;

	printf("Informe nome/endereco do arquivo1: ");
	scanf("%s", &NomeArquivo);
	arquivo1 = fopen(NomeArquivo,"r");
	if(arquivo1 == NULL)
	{
		printf("Nao foi possivel criar/abrir o arquivo.\n");
		exit(1);
	}
	printf("Palavra a pesquisar: ");
	scanf("%s", &palavra);

	printf("A palavra '%s' se repete %d vezes\n", palavra, LeePesquisaArquivo(arquivo1, palavra));
	fclose(arquivo1);

}

int LeePesquisaArquivo(FILE *arquivo1, char *palavra)
{
	int conta1 = 0, repete = 0;
	int tam=strlen(palavra);
	char prox;

	while(1)
	{
		prox = fgetc( arquivo1);
		if(prox == EOF)
			break;

		if(prox == palavra[conta1])
		{
			conta1++;
			if(conta1 == tam)
			{
				conta1 = 0;
				repete++;
			}
		}
		else
			conta1 = 0;
	}

	return repete;
}

