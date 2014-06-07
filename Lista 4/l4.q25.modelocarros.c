#include<stdio.h>
#include<string.h>
#include<ctype.h>

char *vet_car, *vet_km;

void cria_vet();
void redimensiona_vet();
void imprimi();

int main()
{
	
	char aux_vet_car[50], aux_vet_km[25];
	char op;
	
	cria_vet(vet_car,vet_km);
	
	while(1)
	{

		printf("Deseja inserir outro carro? (S / N)");
		scanf("%/n/r[^/n]",op);
		if(tolower(op) == 'n')
			return 0;
		printf("--");
		printf("Informe o modelo do carro: ");
		scanf("%/n/r[^/n]",vet_car);		
		printf("Informe quantos km/litros esse carro faz: ");
		scanf("%/n/r[^/n]",vet_km);
		
		redimensiona_vet(aux_vet_car,aux_vet_km);
						
	}
	system("pause");
	return 0;
}


// ************** Cria Vetor.

void cria_vet()
{

	vet_car = (char *)malloc(sizeof(char));
	vet_km  = (char *)malloc(sizeof(char));
	vet_car[0]= '|'; //inicializa vetores para contagem dos carros.
	vet_km[0]= '|';
	vet_car[1]= '\0';
	vet_km[1]= '\0';

	return;
}

// ************** Redimensiona Vetor

void redimensiona_vet(char *aux_vet_car, char *aux_vet_km)
{
	char *tst_car, *tst_km;
	int aux_car, aux_km,i;
	
	aux_car = strlen(vet_car);
	aux_km = strlen(vet_km);
	vet_car[aux_car+1]= '\0';
	vet_km[aux_km+1]= '\0';	
	vet_car[aux_car]= '|'; 
	vet_km[aux_km]= '|';

	tst_car = (char *)realloc(vet_car,strlen(aux_vet_car)*sizeof(char));
	if (tst_car != NULL)
	{
		printf("Sem memoria!");
		vet_car = tst_car;
	}

	tst_km = (char *)realloc(vet_km,strlen(aux_vet_km)*sizeof(char));
	if (tst_km != NULL)
	{
		printf("Sem memoria!");
		vet_km = tst_km;
	}
	

	
	for(i=0; i<aux_car + strlen(aux_vet_car);i++);
	{
		vet_car[aux_car+1+i] = aux_vet_car[i];
	}
	for(i=0; i<aux_km+strlen(aux_vet_km);i++);
	{
		vet_km[aux_km+1+i] = aux_vet_km[i];
	}	
	
	free(aux_vet_car);
	free(aux_vet_km);	
	return;
}


// ************** Imprimi Vetor

void imprimi()
{
	
	
	
	return;
}
