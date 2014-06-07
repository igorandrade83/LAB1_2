#include<stdio.h>

void calculo(int *aux, int *aux2, int *c, int *num)
{
	while (*aux < *num) //Imprimi até o número de fibonacci anterior ao número pedido;
	{
		*c = *aux + *aux2;
		printf("%d ",*aux);
		*aux = *aux2;
		*aux2 =*c; 
	};
	
	*c = *aux + *aux2; //Imprime o número seguinte ao pedido;
	printf("%d ",*aux);

	
	if (*num == *aux) //Verifica se o número pedido é um número de fibonacci e imprime o próximo fibonacci.
	{
		*aux = *aux2;
		*aux2 =*c; 
		*c = *aux + *aux2;
		printf("%d ",*aux);
	}
	return;
}

void recebe ()
{
	int aux=0, aux2=1,c=0, num;
	printf("Informe valor: ");
	scanf("%d",&num );
	
	calculo(&aux, &aux2, &c, &num);	
	return;
}



int main()
{

	recebe ();
	system("pause");
	return 0;
}



