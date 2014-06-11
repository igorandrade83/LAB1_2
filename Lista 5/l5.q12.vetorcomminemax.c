#include <stdio.h>
#include <math.h> 


void receba(int *vet1,int *min,int *max)
{
	int i;
	
	*min = *max = *(vet1+0);
	for(i=0; i <5; i++)
	{
		if( *(vet1+i) < *min )
			*min = *(vet1+i);
		if( *(vet1+i) > *max )
			*max = *(vet1+i);		
	}
	

	return;
}

int main()
{
	int *min,*max, i, vet[5];

	for(i=0;i<5;i++) // recebe o vetor do usuario e verifica mair elemento.
		scanf("%d", &vet[i]);
	
	receba(vet, &min, &max);

	printf("Maximo: %d\nMinimo: %d\n\n", max, min);
	system("pause");
	return 0;
}
