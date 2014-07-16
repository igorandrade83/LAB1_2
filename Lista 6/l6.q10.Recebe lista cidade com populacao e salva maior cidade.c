#include <stdio.h>

/*
* Receber arquivo com nomes de cidades e popula��o e
* criar outro com o nome e popula��o da cidade mais populosa.
*/
void ChamaFuncao();

int main()
{
	ChamaFuncao();
	system("pause");
	return 0;
}

void ChamaFuncao()
{
	FILE *arquivo1;		//ler
	FILE *arquivo2;		//escreve
	char citynm[40], segnm[40];
	float cityhab=0, seghab;
	char nomearquivo[20];

	printf("Informe nome do arquivo que sera lido: ");
	scanf("%[^\n]", &nomearquivo);

	arquivo1 = fopen(nomearquivo,"r");
	if(arquivo1 == NULL)
	{
		printf("Nao foi possivel abrir o arquivo.");
		exit(1);
	}
	printf("Informe nome do arquivo que sera salvo: ");
	scanf("\n\r%[^\n]", &nomearquivo);

	arquivo2 = fopen(nomearquivo,"w");
	if(arquivo2 == NULL)
	{
		printf("Nao foi possivel criar o arquivo.");
		exit(1);
	}

	fscanf(arquivo1,"%[^\t]\t%f", &citynm, &cityhab);
	seghab = cityhab;
	strcpy(segnm,citynm);
	while(!feof(arquivo1))
	{
		fscanf(arquivo1,"%[^\t]\t%f", &citynm, &cityhab);
		if(seghab < cityhab)
		{
			seghab = cityhab;
			strcpy(segnm,citynm);
		}

	}

		fprintf(arquivo2,"Cidade de maior Populacao:\n%s\t%f hab.",segnm, seghab);
	fclose(arquivo1);
	fclose(arquivo2);
	return;
}
