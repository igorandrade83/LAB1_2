#include<stdio.h>

int dobro(int *vet)
{
	int i;
	for (i=0;i<4;i++)
		printf("Posicao %d - valor dobrado %d - endereco %i\n",i,vet[i]*2, &vet[i]);


	return 0;
}

void receba(int *vet)
{
	int i;
	printf("digite 5 valores: ");
	for (i=0;i<4;i++)
		scanf("%d",&vet[i]);

	dobro(vet);

	return;
}
int main()
{
	int vet[4];

	receba(vet);
	system("pause");
	return 0;
}

