#include <stdio.h>
#include <math.h> 


int receba()
{
	int N, k, j,i, maior=-9999999;
	
	printf("informe N e k:");
	scanf("%d %d", &N, &k);
	int vet[N];

	for(i=0;i<N;i++) // recebe o vetor do usuario e verifica mair elemento.
	{
		scanf("%d", &vet[i]);
		if(maior < vet[i])
			maior = vet[i];
	}

	i=0;
	for(j=0; j<N; j+=k)
	{
		printf("\n");
		for(i=j; i<j+k ; i++)
		{
			if(i>N-1)
				printf("  ");
			else
			printf("%d ", vet[i]);
		}
		printf("\n");
	}
		
	return maior;
}

int main()
{
	printf("\n\nmaior: %d\n",receba());
	system("pause");
	return 0;
}
