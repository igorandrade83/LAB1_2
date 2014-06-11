#include <stdio.h>
#include <math.h> 


int receba()
{
	int *vet1, *vet2, *vet3;
	int tam1=0, tam2=0, aux,i;	
	
	vet1 = (int *)malloc(sizeof(int));
	vet2 = (int *)malloc(sizeof(int));
	vet3 = (int *)malloc(sizeof(int));

	// ****** RECEBENDO VETOR 1 :	
	printf("Informe vetor 1.\n");
	do
	{
		printf("posicao %d: ",tam1);
		scanf("%d", &aux);
		
		tam1++;	
		vet1 = (int *)realloc(vet1,tam1*sizeof(int));
		*(vet1+tam1-1) = aux;
		
	}while(aux > -1);
	tam1--; // tamanho do vetor 1;
	
	// ****** RECEBENDO VETOR 2 :	
	printf("\nInforme vetor 2.\n");
	do	// Realoca a cada novo numero inserido.
	{
		printf("posicao %d: ",tam2);
		scanf("%d", &aux);
		
		tam2++;	
		vet2 = (int *)realloc(vet2,tam2*sizeof(int));
		*(vet2+tam2-1) = aux;
		
	}while(aux > -1);
	tam2--; // tamanho do vetor 2;

	if(tam1 != tam2) // verificando se o tamanho dos vetores são iguais.
		return -1;  // retorna erro. (-1 == erro)
		
	
	vet3 = (int *)realloc(vet3, sizeof(int)*tam1); // realoca para o mesmo tamanho de vet1
	
	for(i=0;i<tam1+1;i++) // Passa para vet3 a soma de vet1 + vet2.
		*(vet3+i) = *(vet1+i) + *(vet2+i);

	return 0;
}
/*
int main()
{
	printf("retorno: %d",receba());
	system("pause");
	return 0;
}*/
