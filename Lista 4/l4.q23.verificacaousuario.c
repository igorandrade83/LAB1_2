#include<stdio.h>
#include<ctype.h>
#include<string.h>

int verifica(char *nome, char *sexo, char *nacionalidade, int *idade)
{
	int i, aux;
	char aux_sexo[10], aux_sexo2[15], aux_idade[50];
	
//************ Verifica Nome
	
	for(i=0;i<strlen(nome);i++)
	{
		if( (toupper(nome[i]) > 64 && toupper(nome[i]) < 91) || nome[i] == ' ')
			continue;
		else
			return 0;
	}

//************ Verifica Sexo

	if( tolower(*sexo) == 'm' || tolower(*sexo) == 'f' )
	{
		if(tolower(*sexo) == 'm')
		{
			strcpy(aux_sexo,"masculino");
			strcpy(aux_sexo2,"habilitado");
		}
		else
		{
			strcpy(aux_sexo,"feminino");
			strcpy(aux_sexo2,"habilitada");
		}
	}
	else
		return 0;
	
//************	Verifica Idade
			
	if(*idade < 0 || *idade > 150) // verifica idade;
		return 0;	
	else
		if(*idade < 18)
			strcpy(aux_idade,"menor de idade, nao esta");
		else
			strcpy(aux_idade,"maior de idade, esta");	

//************ Verifica Nacionalidade

	if(stricmp(nacionalidade,"brasileira") == 0 || stricmp(nacionalidade,"estrangeira") == 0)
	{
		if(stricmp(nacionalidade,"brasileira") == 0)
			strcpy(nacionalidade,"brasileira");
		else
			strcpy(nacionalidade,"estrangeira");
	}
	else
		return 0;
	
//************ imprimi resultado !!!

	printf("%s, nacionalidade %s, sexo %s e %s %s a dirigir.\n",nome, nacionalidade, aux_sexo, aux_idade, aux_sexo2);

		return 1;	
}

void recebe()
{
	char nome[50],nacionalidade[15],sexo;
	int idade, aux;
	
	printf("Informe nome (sem acento): ");
	gets(nome);
	printf("Informe o sexo: ");
	scanf("\n\r%[^\n]", &sexo);
	printf("informe a idade: ");
	scanf("%d", &idade);
	printf("Informe a nacionalidade (brasileira ou estrangeira): ");
	scanf("\n\r%[^\n]", &nacionalidade);
	
	

	aux = verifica(nome, &sexo, nacionalidade, &idade);
	
	if(aux == 0)
		printf("Usuario nao validado!\n");
		
	return ;
}

int main()
{
	
	
	recebe();
	system("pause");	
	return 0;
}
