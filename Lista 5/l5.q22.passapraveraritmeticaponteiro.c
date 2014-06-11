#include<stdio.h>
#define tam 4


void receba(int *vet, int valor)
{
	int i;

	for (i=0;i<tam+1;i++)
		*(vet+i) = valor;

	return;
}
int main()
{
	int vet[tam];
	int valor = 10;
	
	receba(vet, valor);
	system("pause");
	return 0;
}

