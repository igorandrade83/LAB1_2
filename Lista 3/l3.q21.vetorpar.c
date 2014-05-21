#include<stdio.h>

int fvetor(int *vet)
{
    int cont=0, i;
    for(i=0;i<10;i++)
        if(vet[i]%2==0)
             cont++;

    return cont;   
}

int main()
{
    int i, vet[10];
    
    for(i=0;i<10;i++)
    {
        scanf("%d",&vet[i]);         
    }
    printf("numeros de vetores pares: %d",fvetor(vet));
    
    system("pause");
    return 0;
}
