#include<stdio.h>

int dobro(int *vet)
{
	int i;
	for (i=0;i<4;i++)
		if(vet[i] % 2 == 0)
			printf("valor %d - endereco %i\n",vet[i], &vet[i]);

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

