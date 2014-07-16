#include <stdio.h>
#include <string.h>
/*
* Um aquivo contem nome e data de nascimento, criar outro que informe o nome e idade
* usuario deve informar data atual.
*/
struct dataAtual
{
	char nome[30];
	int dia, mes, ano;
};

struct dataAtual dt;
void ChamaFuncoes();
void LeeSalvaArquivo(FILE *arquivo1, FILE *arquivo2 );
int CalcIdade(struct dataAtual nasc, struct dataAtual dt);

int main()
{
	ChamaFuncoes();

	system("pause");
	return 0;
}

void ChamaFuncoes()
{
	char NomeArquivo[200];

	FILE *arquivo1;		//ler
	FILE *arquivo2;		//escreve

	printf("Informe o nome do arquivo com nome e data de nascimento: ");
	scanf("%[^\n]", &NomeArquivo);

	arquivo1 = fopen(NomeArquivo,"r");
	if(arquivo1 == NULL)
	{
		printf("Nao foi possivel criar/abrir o arquivo1.\n");
		exit(1);
	}

	arquivo2 = fopen("nomeeIdade.txt","w");
	if(arquivo2 == NULL)
	{
		printf("Nao foi possivel criar/abrir o arquivo2.\n");
		exit(1);
	}


	LeeSalvaArquivo(arquivo1, arquivo2 );
	fclose(arquivo1);
	fclose(arquivo2);

	return;

}

void LeeSalvaArquivo(FILE *arquivo1, FILE *arquivo2 )
{
	struct dataAtual nasc;
	int oi;

	printf("Informe a data atual (aa/mm/aaaa): ");
	scanf("%d/%d/%d", &dt.dia, &dt.mes, &dt.ano);

	while(!feof(arquivo1))
	{
		fscanf(arquivo1,"%[^\t]\t%d/%d/%d",&nasc.nome, &nasc.dia, &nasc.mes, &nasc.ano);
		oi = CalcIdade(nasc, dt);
		fprintf(arquivo2,"%s\t%d anos.",nasc.nome, oi);

	}

	return;
}

int CalcIdade(struct dataAtual nasc, struct dataAtual dt)
{
	int anos;

	anos = dt.ano - nasc.ano;

	if((dt.mes < nasc.mes || dt.mes == nasc.mes) && (dt.dia < nasc.dia))
		anos--;

	return anos;
}
