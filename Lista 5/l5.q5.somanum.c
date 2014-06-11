#include <stdio.h>

void troca(int *A,int *B)
{
	int aux;
	printf("Informe A e B: ");
	scanf("%d %d", &(*A), &(*B));

	*A = (*A) + (*B);

	return;
}

int main()
{
	int A, B;
	troca(&A, &B);

	printf("Soma: %d\nValor de B: %d\n",A,B);
	system("pause");
	return 0;
}
