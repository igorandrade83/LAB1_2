#include<stdio.h>

//Treinando ponteiro de ponteiro

void imprimi(int *ppsoma, int *ppcontador, int *ppnum_maior, int *ppnum_menor, int *ppcontador_par, int *ppquantidade_par)
{
	printf("(b) A quantidade de numeros: %d\n", *ppcontador);
	printf("(c) A media dos numeros: %d\n", *ppsoma/ *ppcontador);
	printf("(d) O maior numero: %d\n", *ppnum_maior);
	printf("(e) O menor numeros: %d\n", *ppnum_menor);
	if(*ppcontador_par>1)
		printf("(f) A media dos numeros pares: %d\n", *ppquantidade_par/ *ppcontador_par);
	else
		printf("(f) Nao teve numeros pares\n");
	return;	
	
}

void calc(int *pnum, int *pa, int *pcont, int *pmaior, int *pmenor, int *pcontpar, int *ppar)
{

	
	while(*pnum!=0)
	{
		scanf("%d", &*pnum);	
		*pa=*pa+*pnum;
		(*pcont)++;
		if (*pnum > *pmaior && (*pnum != 0))
			*pmaior = *pnum;
		if ((*pnum < *pmenor) && (*pnum != 0))
			*pmenor = *pnum;
		if(*pnum%2==0)
		{
			*ppar=*ppar+*pnum;
			(*pcontpar)++;
		}
	}
	(*pcont)--;
	(*pcontpar)--;
	imprimi(pa, pcont, pmaior, pmenor, pcontpar, ppar);
}


int main()
{
	int num=-1,a=0,cont=0,maior=-99999,menor=99999,contpar=0,par=0;
	calc(&num,&a,&cont,&maior,&menor,&contpar,&par);
	system("pause");
	return 0;
}
