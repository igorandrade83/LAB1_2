#include <stdio.h>
#include <math.h> 

	// Somente a função.
void verifica(int *vet, int n, int *maior, int *vezes)
{
	int i;
	
	for(i=0; i<n;i++)
		if(*maior < vet[i])
		{
			*maior = vet[i];
			(*vezes)++;
		}	
	
	return;
}
/*
int main()
{
	int vet[10], tam=9, vezes=0, maior,i;

	for(i=0; i<9;i++)
		scanf("%d",vet[i]);

	maior = vet[0];
	verifica(vet, tam, &maior, &vezes);

	printf("maior: %d | vezes: %d\n", maior,vezes);

	system("pause");
	return 0;
}*/
