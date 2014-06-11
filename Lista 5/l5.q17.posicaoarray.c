#include<stdio.h>

float endereco(float *num)
{
	int i;
	printf("\n");	
	for (i=0;i<9;i++)
		printf("Endereco %d = posicao %i\n",i, &num[i]);

	return 0;
}

int receba()
{
	float a[9];
	int i;
	
	printf("digite 10 numeros: ");
	
	for (i=0;i<9;i++)
		scanf("%f",&a[i]);

	endereco(a);
}


int main()
{
	receba();
	system("pause");
	return 0;
}


