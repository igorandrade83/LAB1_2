#include <stdio.h>
/*
* Receber um arquivo com os pre�os de varios produtos e somar todos.
*/
void AbrirArquivo();
float soma(FILE *arquivo);

int main()
{
	AbrirArquivo();

	system("pause");
	return 0;
}

void AbrirArquivo()
{
	FILE *arquivo = fopen("valor.txt","r");
	if(arquivo == NULL)
	{
		printf("N�o foi possivel abrir o arquivo.\n");
		exit(1);
	}


	printf("A soma dos valores eh: %.2f\n", soma(arquivo));
	fclose(arquivo);
}

float soma(FILE *arquivo)
{
	float somatorio=0, recebe=0;

	while(!feof(arquivo))
	{
		fscanf(arquivo,"%f",&recebe);
		somatorio = somatorio + recebe;
	}

	return somatorio;
}
