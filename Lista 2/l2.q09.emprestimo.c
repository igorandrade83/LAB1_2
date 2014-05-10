#include<stdio.h>
#include <stdlib.h>

float percentual = 0.20;

int main()
{

	void corpo();
	void calculo(float salario, float prestacao_emprestimo);

	corpo();

	system("pause");
	return 0;
}

void corpo()
{
	float salario,prestacao_emprestimo;
	
	printf("Informe o salario: ");
	scanf("%f", &salario);
	printf("\nInforme parcela do emprestimo: ");
	scanf("%f", &prestacao_emprestimo);
		
	calculo(salario,prestacao_emprestimo);
	
	return;	
}

void calculo(float salario, float prestacao_emprestimo)
{
	if (prestacao_emprestimo < salario*percentual)
		printf("Emprestimo concedido.\n");
	else
		printf("Emprestimo nao concedido.\n");
	
	return;
}
