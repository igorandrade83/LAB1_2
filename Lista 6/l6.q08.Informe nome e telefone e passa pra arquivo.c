#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
* Usuario entra com nome de usuario e telefone e o programa salva no arquivo,
* acaba qnd o usuario informar '0' no telefone.
*/
void RecebeDados();
void limpa(void)
{
  while ( getchar() != '\n' );
}

int main()
{

	RecebeDados();
	system("pause");
	return 0;
}

void RecebeDados()
{
	char nome[30], telefone[12];
	FILE *arquivo = fopen("NomeTelefone.txt","w");
	if(arquivo==NULL)
	{
		printf("N�o foi possivel abrir/criar arquivo. falta de memoria.\n");
		exit(1);
	}

	printf("Infome Nome: ");
	scanf("%[^\n]", &nome);
	getchar();
	printf("Infome Telefone: ");
	scanf("%[^\n]", &telefone);
	getchar();
	while(strcmp(telefone,"0")!=0)
	{
        fprintf(arquivo,"%s\t%s\n",nome,telefone);
        system("cls");
		printf("Infome Nome: ");
		scanf("%[^\n]", &nome);
		getchar();
		printf("Infome Telefone: ");
		scanf("%[^\n]", &telefone);
		getchar();
	}

	fclose(arquivo);
	return;
}
