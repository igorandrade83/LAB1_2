#include <stdio.h>

int proc_vet(int *ppvet)
{
	int i,j,x=ppvet[0];
	
	for(i=0;i<10;i++)
	{
		printf("| %d - %d |\n", i, ppvet[i]);
		if(ppvet[i]>x)
		{
			x = ppvet[i];
			j=i;
		}
	}
	
	printf("\nMaior elemento: %d\n",x);
	for(i=0;i<10;i++)
		if(ppvet[i]==x)
			printf("Encontra-se na posicao: %d\n",i);

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

void recebe ()
{
	int vet[9];
	fvetor(vet);
	proc_vet(vet);

	return;
}

int main()
{
	recebe();
	
	system ("pause");	
	return 0;
}
