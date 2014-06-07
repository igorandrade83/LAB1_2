#include<stdio.h>

int calc(int *notas)//calcula
{
    int media,i;
    for(i=0;i<15;i++)
        media = media + notas[i];
    media = media / 15;
    
    
    return media;
}

void fvetor(int *notas)
{
    int media=0, i;
    for(i=0;i<15;i++)
        scanf("%d", &notas[i]);

    return;   
}

void recebe ()
{
    int notas[10];
    fvetor(notas);
    printf("media: %d\n", calc(notas));

	return;
}

int main()
{
	recebe();
    
    system("pause");
    return 0;

}
