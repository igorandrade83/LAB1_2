#include <stdio.h>

/*
* Receber um arquivo do usuario e informar quantas linhas esse arquivo possui.
*/

void ChamaFuncoes();
int LeeImprimeArquivo(FILE *arquivo);


int main()
{
	ChamaFuncoes();

	system("pause");
	return 0;
}

void ChamaFuncoes()
{
	char NomeArquivo[100];
	FILE * arquivo;

	printf("Informe nome/endereco arquivo: ");
	scanf("%s", &NomeArquivo);

	arquivo = fopen(NomeArquivo,"r");
	if(arquivo == NULL)
	{
		printf("Nao foi possivel criar/abrir o arquivo.\n");
		exit(1);
	}


	printf("Arquivo %s possui %d Linhas.\n",NomeArquivo, LeeImprimeArquivo(arquivo));
}

int LeeImprimeArquivo(FILE *arquivo)
{
	int cont=0;
	char txt;

	do
	{
		txt = getc(arquivo);
		if(txt == '\n')
			cont++;
	}while(txt != EOF);
	fclose(arquivo);
	return cont+1;
}
