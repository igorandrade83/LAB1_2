#include <stdio.h>
#include <math.h> 


int receba()
{
	int i, vet[5];
	int *p_inteiro = vet;
	
	for(i=0; i<5; i++)
	{
		*(p_inteiro+i) = i*10;	
		printf("- ANTES, Inteiro. Posicao %d: %d\n",i, *(p_inteiro+i));
	}	

	for(i=0; i<5; i++)
	{
		*(p_inteiro+i) = 88;
		printf("- DEPOIS, Inteiro. Posicao %d: %d\n",i, *(p_inteiro+i));
	}	
	

	return ;
}

int main()
{

	receba();
	system("pause");
	return 0;
}
