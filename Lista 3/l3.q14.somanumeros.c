#include<stdio.h>

void printa(int *ppaux)
{
	printf("Soma dos 10 numeros: %d\n", *ppaux);
	
	return;
}

void calc(int *pnum, int *paux)
{
	int i;
	
	for(i=0;i<10;i++)
	{
		scanf("%d", &*pnum);
		*paux = *pnum + *paux;
	}
	
	printa(paux);
	return;	
}

void recebe ()
{
	int num, aux=0;
	calc(&num, &aux);

	return;
}

int main()
{

	recebe();	
	system("pause");
	return 0;
}
