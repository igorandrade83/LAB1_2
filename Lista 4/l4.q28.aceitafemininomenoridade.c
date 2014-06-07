#include<stdio.h>
#include<ctype.h>
#include<string.h>

int verifica(char *sexo, int *idade)
{
	int cont=0;
	

//************ Verifica Sexo

	if( tolower(*sexo) == 'f' )
	{
		cont++;
	}

//************	Verifica Idade
			
	if(*idade < 18)
	{
		cont++;
	}	

	
		return cont;	
}

void recebe()
{
	char nome[50],sexo;
	int idade, aux;
	
	//nome = (char *)malloc(sizeof(char)*50);
	printf("Informe nome (sem acento): ");
	scanf("\n\r%[^\n]", &nome);
	printf("Informe o sexo: ");
	scanf("\n\r%[^\n]", &sexo);
	printf("informe a idade: ");
	scanf("%d", &idade);

	
	if(verifica(&sexo, &idade) ==2)
		printf("Nome: %s - ACEITO!\n",nome);
	else
		printf("Nao ACEITO!\n");	

	return ;
}

int main()
{
	
	
	recebe();
	system("pause");	
	return 0;
}
