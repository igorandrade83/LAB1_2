#include <stdio.h>

void troca(int *A,int *B)
{
	int aux;
	printf("Informe A e B: ");
	scanf("%d %d", &(*A), &(*B));

	if(*A < *B)
	{
		aux = *A;
		*A = *B;
		*B = aux;
	}

	return;
}

int main()
{
	int A, B;
	troca(&A, &B);

	printf("A = %d, B = %d",A, B);
	system("pause");
	return 0;
}
