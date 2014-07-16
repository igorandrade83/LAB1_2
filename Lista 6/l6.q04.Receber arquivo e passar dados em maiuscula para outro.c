#include <stdio.h>
#include <string.h>
/*
* Receber arquivos do usuario e passar os dados do 1. para o 2. com tudo em maiusculo.
*/
void ChamaFuncoes();
void LeeSalvaArquivo(FILE *arquivo1, FILE *arquivo2);


int main()
{
	ChamaFuncoes();

	system("pause");
	return 0;
}

void ChamaFuncoes()
{
	char NomeArquivo[200];
	FILE *arquivo1;
	FILE *arquivo2;

	printf("Informe nome/endereco do arquivo1: ");
	scanf("%s", &NomeArquivo);
	arquivo1 = fopen(NomeArquivo,"r");
	if(arquivo1 == NULL)
	{
		printf("Nao foi possivel criar/abrir o arquivo.\n");
		exit(1);
	}

	printf("Informe nome do arquivo para copiar os outros 2: ");
	scanf("%s", &NomeArquivo);
	arquivo2 = fopen(NomeArquivo,"w");
	if(arquivo2 == NULL)
	{
		printf("Nao foi possivel criar/abrir o arquivo.\n");
		exit(1);
	}


	LeeSalvaArquivo(arquivo1, arquivo2 );
	fclose(arquivo1);
	fclose(arquivo2);

}

void LeeSalvaArquivo(FILE *arquivo1, FILE *arquivo2)
{
	char txt;

	txt = fgetc(arquivo1);		//Evitando envio de Lixo para o novo arquivo.
	while(txt != EOF)
	{
		putc(toupper(txt),arquivo2);
		txt = fgetc(arquivo1);
	}
	return;
}
