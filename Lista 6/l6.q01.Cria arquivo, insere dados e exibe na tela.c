#include <stdio.h>

/*
*Criar arquivo e permitir que usuario insira varios caracteres ate o usuario digitar '0' e salvar,
*Depois imprimir tudo que ta no arquivo, na tela.
*/
void ChamaFuncoes();
void PassaParaArquivo(FILE *arquivo);
void LeeImprimeArquivo(FILE *arquivo);
void LimpaBuffer()						//Limpa Buffer do teclado;
{
	char c;
	while((c = getchar()) != '\n' && c != EOF);
}

int main()
{
	ChamaFuncoes();

	system("pause");
	return 0;
}

void ChamaFuncoes()
{

	FILE * arquivo;
	arquivo = fopen("arq.txt","w");
	if(arquivo == NULL)
	{
		printf("Nao foi possivel criar o arquivo\n");
		exit(1);
	}

	PassaParaArquivo(arquivo);
	LeeImprimeArquivo(arquivo);
}

void PassaParaArquivo(FILE *arquivo)
{
	char txt;

	do
	{
		txt = getchar();
		if(txt == '0')
			break;
		putc(txt,arquivo);
	}while(1);

	fclose(arquivo);
	return;
}

void LeeImprimeArquivo(FILE *arquivo)
{
	char txt;
	arquivo = fopen("arq.txt","r");
	rewind(arquivo);
	do
	{
		txt = getc(arquivo);
		printf("%c",txt);
	}while(txt != EOF);
	fclose(arquivo);
	return;
}
