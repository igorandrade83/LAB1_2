#include <stdio.h>

int proc_vet(int *ppvet)
{
	int i,j,x=-999999;
	
	for(i=0;i<10;i++)
	{
		if(ppvet[i]>x)
		{
			x = ppvet[i];
			j=i;
		}
	}
	
	return j;
}
void fvetor(int *pvet)
{
	int i;
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&pvet[i]);
		
	}	
	
	return;
}

int main()
{
	int vet[9];
	fvetor(vet);
	printf("Maior numero: %d\nposicao(0~9): %d\n",vet[proc_vet(vet)], proc_vet(vet));
	
	system ("pause");	
	return 0;
}
