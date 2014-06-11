#include <stdio.h>


int recebe(int *A,int *B, int *C)
{
	int aux,verifica=1;
	printf("Informe A, B e C: ");
	scanf("%d %d %d", &(*A), &(*B), &(*C));

	if (*A == *B && *B == *C)
 		verifica =0;

	if(*A > *C)
	{
		aux = *A;
		*A = *C;
		*C = aux;
	}
	if(*B > *C)
	{
		aux = *B;
		*B = *C;
		*C = aux;
	}
	if(*A > *B)
	{
		aux = *A;
		*A = *B;
		*B = aux;
	}
	return verifica;
}

int main()
{
	int A, B, C, retorna;
	retorna = recebe(&A, &B, &C);

	printf("A = %d, B = %d, C = %d e retorna = %d\n",A, B, C,retorna );
	system("pause");
	return 0;
}
