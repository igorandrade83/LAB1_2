#include <stdio.h>

/*
* Receber 2 arquivos do usuario e criar um terceiro com o conteudo dos 2.
*/
void ChamaFuncoes();
void LeeSalvaArquivo(FILE *arquivo1, FILE *arquivo2, FILE *arquivo3);


int main()
{
	ChamaFuncoes();

	system("pause");
	return 0;
}

void ChamaFuncoes()
{
	char NomeArquivo[100];
	FILE *arquivo1;
	FILE *arquivo2;
	FILE *arquivo3;

	printf("Informe nome/endereco do arquivo1: ");
	scanf("%s", &NomeArquivo);
	arquivo1 = fopen(NomeArquivo,"r");
	if(arquivo1 == NULL)
	{
		printf("Nao foi possivel criar/abrir o arquivo.\n");
		exit(1);
	}

	printf("Informe nome/endereco do arquivo2: ");
	scanf("%s", &NomeArquivo);
	arquivo2 = fopen(NomeArquivo,"r");
	if(arquivo2 == NULL)
	{
		printf("Nao foi possivel criar/abrir o arquivo.\n");
		exit(1);
	}

	printf("Informe nome do arquivo para copiar os outros 2: ");
	scanf("%s", &NomeArquivo);
	arquivo3 = fopen(NomeArquivo,"w");
	if(arquivo3 == NULL)
	{
		printf("Nao foi possivel criar/abrir o arquivo.\n");
		exit(1);
	}


	LeeSalvaArquivo(arquivo1, arquivo2, arquivo3 );
	fclose(arquivo1);
	fclose(arquivo2);
	fclose(arquivo3);
}

void LeeSalvaArquivo(FILE *arquivo1, FILE *arquivo2, FILE *arquivo3)
{
	char txt;

	txt = fgetc(arquivo1);		//Evitando envio de Lixo para o novo arquivo.
	while(txt != EOF)
	{
		putc(txt,arquivo3);
		txt = fgetc(arquivo1);
	}

	fprintf(arquivo3,"\n");		//quebra de linha estre as copias.

	txt = fgetc(arquivo2);		//Evitando envio de Lixo para o novo arquivo.
	while(txt != EOF)
	{
		putc(txt,arquivo3);
		txt = fgetc(arquivo2);
	}

	return;
}
