#include<stdio.h>

int fvetor(int *vet)
{
    int cont=0, i;
    for(i=0;i<10;i++)
        if(vet[i]<0)
              vet[i]=0;

    return cont;   
}

void recebe ()
{
    int i, vet[10];
    
    for(i=0;i<10;i++)
    {
        scanf("%d",&vet[i]);         
    }
    fvetor(vet);
    for(i=0;i<10;i++)
    {
        printf("%d ",vet[i]);         
    }

	return;
}

int main()
{

    recebe();
    system("pause");
    return 0;
}
