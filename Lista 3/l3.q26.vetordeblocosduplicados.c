#include<stdio.h>

#define tam 9
void troca(int *pvet, int *a, int *b)
{
	int aux;
	
	aux = pvet[*b];
	pvet[*b] = pvet[*a];
	pvet[*a] = aux;
	  
	return;
}

void ordena(int *A)
{
	int aux=0,a,b,verifica=-1;
	
	while(verifica!=tam)
	{
		verifica =0;
		for(a=0,b=1;a<tam;a++,b++)
			if(A[a] > A[b])
				troca(A, &a, &b);
			else
				verifica++;
	}
	
	for(a=0,b=1;a<tam+1;a++,b++)
		if(A[a] == A[b])
		{
			printf("\nnumeros repetidos: %d", A[a]);
			aux++;
		}
	if(aux==0)	
		printf("Não existe numeros repetidos\n\n");	
	return;
}

void preenchevetor(int *pvet)
{
	int i;
	for(i=0;i<tam+1;i++)
	{
		scanf("%d", &pvet[i]);		
	}

	return;
}


int main()
{
	int A[tam],finaliza=-1,recursivo=0;
	
	printf("informe o vetor\n");
	preenchevetor(A);

	ordena(A);

	//calc(A,&finaliza,&recursivo);

	
	system("pause");
	return 0;

}
