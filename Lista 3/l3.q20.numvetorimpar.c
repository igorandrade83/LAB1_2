#include <stdio.h>


void printar(int *cont, int *contimpar, int *vet, int *vetimpar) // imprime os vetores
{
	int i=0;
	printf("Primeiro vetor:");

	while(i!=*cont)
	{
		if(i%10==0)
			printf("\n");
		printf("%d ",vet[i]);
		i++;
	}

	printf("\n\nSegundo vetor:");

	i=0;
	while(i!=*contimpar)
	{
		if(i%10==0)
			printf("\n");
		printf("%d ",vetimpar[i]);
		i++;
	}
	printf("\n");
	
	return;
}

void fvetimpar(int *cont,int *contimpar, int *vet, int *vetimpar) //preenche a tabela 2 e conta qnt numeros impares tem
{
	int i;
	
	for(i=0;i<(*cont);i++)
		if(vet[i]%2==1)
		{
			vetimpar[*contimpar]=vet[i];
			(*contimpar)++;
		}
	return;
}


int fvetor(int *vet, int *pcont) //preenche a tabela 1
{
	int i,num;
	
	for(i=0;i<100;i++) 
	{
		scanf("%d",&num);
		if(num>0 && num<50)
		{
			vet[i] = num;
			(*pcont)++;
			
		}
				
		else
			return 0;	
	}	
	return 0;	
}


int main()
{
	int cont=0,vet[100], vetimpar[100];

	int i,num, contimpar=0;
	fvetor(vet,&cont);
	fvetimpar(&cont,&contimpar, vet, vetimpar);
	printar(&cont, &contimpar, vet, vetimpar);
	
		
	system("pause");
	return 0;
}
