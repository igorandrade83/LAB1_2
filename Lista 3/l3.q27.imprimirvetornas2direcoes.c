#include<stdio.h>
#define tam 4
void preenche(float *A)
{
	int i;
	for(i=0;i<tam+1;i++)
		scanf("%f", &A[i]);
	return;
}

#define tam 4
int main()
{
	float A[tam];
	int i,cod=-1;
	
	printf("Informe 5 elementos para o vetor: \n");
	preenche(A);
	volte:
	printf("Informe o codigo(0-finaliza, 1-imprime dir-esq, 2-imprime esq-dir):\n \n");
	scanf("%d",&cod);
	
	do
	{
		switch(cod)
		{
			case 0: return 0;
			case 1:
			{
				for(i=0;i<tam+1;i++)
					printf("| %.2f ",A[i]);
			//	printf("|\n");
			//	system("pause");
			//	return 0;
			}
			case 2:
			{
				for(i=tam+1;i>0;i--)
					printf("| %.2f ",A[i]);
			//	printf("|\n");
			//	system("pause");
			//	return 0;
			}
			default:
			{
				printf("Codigo invalido! \n");
				_sleep(2500);
				system("cls");
				goto volte;
			}
		}
	}while(cod<3 || cod>-1);	
	system("pause");
	return 0;

}
