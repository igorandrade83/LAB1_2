#include<stdio.h>

void calculo(int *aux, int *aux2, int *c, int *num)
{
	while (*aux < *num) //Imprimi at� o n�mero de fibonacci anterior ao n�mero pedido;
	{
		*c = *aux + *aux2;
		printf("%d ",*aux);
		*aux = *aux2;
		*aux2 =*c; 
	};
	
	*c = *aux + *aux2; //Imprime o n�mero seguinte ao pedido;
	printf("%d ",*aux);

	
	if (*num == *aux) //Verifica se o n�mero pedido � um n�mero de fibonacci e imprime o pr�ximo fibonacci.
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



