#include<stdio.h>

void troca(int *pvet, int *a, int *b)
{
	int aux;
	
	aux = pvet[*b];
	pvet[*b] = pvet[*a];
	pvet[*a] = aux;
	  
	return;
}

void ordena(int *pvet)
{
	int a,b,verifica=-1;
	
	while(verifica!=10)
	{
		verifica =0;
		for(a=0,b=1;a<10;a++,b++)
		{
			
			if(pvet[a] > pvet[b])
				troca(pvet, &a, &b);
			else
				verifica++;
		}
	}
	return;
}

void preenchevetor(int *vet)
{
	vet[0] = 0;
	vet[1] = 1;
	vet[2] = 3;
	vet[3] = 7;
	vet[4] = 8;
	vet[5] = 10;
	vet[6] = 11;
	vet[7] = 10;
	vet[8] = 6;
	vet[9] = 5;
	vet[10] = 2;
	return;   
}

void recebe ()
{
    int vet[10],i;
    preenchevetor(vet);
    ordena(vet);
 
    for(i=0;i<11;i++)
        printf("vetor %d: %d\n", i, vet[i]);

	return;
}

int main()
{

    recebe();
    system("pause");
    return 0;

}
