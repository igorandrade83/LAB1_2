#include<stdio.h>

/*lista 3 - quest�o 1: Elabore um programa que fa�a leitura de v�rios n�meros inteiro, at� que se digite um n�mero negativo.
O programa tem que retornar o maior e o menor n�mero lido*/

/*Trabalhando com passagem por referencia*/


void recebe()
{
	
	int numero, maior,menor;
	void seleciona(int *numero, int *maior, int *menor);

	printf("Insira os valores (negativo finaliza):\n");
	scanf("%d", &numero);
	
	maior = menor = numero;
	seleciona(&numero, &maior, &menor);
	printf("Maior numero: %d\nMenor numero: %d\n",maior,menor);
	
	return;
}

void seleciona(int *numero, int *maior, int *menor)
{
	while (*numero > -1)
	{
		scanf("%d", *&numero);
		
		if (*numero > *maior)
			*maior = *numero;
		if (*numero < *menor && *numero > 0)
			*menor = *numero;		
	};
	return;
}


int main()
{

	recebe();
	system("pause");
	return 0;
}


