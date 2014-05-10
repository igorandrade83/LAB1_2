#include<stdio.h>
#include<stdlib.h>

/* Utilizei as funções _sleep, goto e system("cls") para aprendizagem */

int main()
{
	void menu();
	void soma();
	void multiplica();
	void subtrai();
	void divide();
	
	menu();
	system("pause");	
	return 0;
}

void menu()
{
	int op;
	
	voltar:	
	printf("    ::: Calculadora :::    \n\n");
	printf("1 - Soma de 2 numeros.\n");
	printf("2 - Diferenca entre 2 numeros (maior pelo menor).\n");
	printf("3 - Produto entre 2 numeros.\n");
	printf("4 - Divisao entre 2 numeros (o denominador nao pode ser zero).\n");
	printf("\nInforme a operacao: ");
	scanf("%d", &op);
	
	switch(op)
	{
		case 1: soma();
			break;
		case 2: subtrai();
			break;		
		case 3: multiplica();
			break;		
		case 4: divide();
			break;
		default:
		{
			system("cls");
			printf("Erro: Opcao invalida! aguarde...");
			_sleep(3000);
			system("cls");
			goto voltar;	
		}
	}
	return;
}

void soma()
{
	float num1, num2;
	printf("Informe os valores: ");
	scanf("%f %f", &num1, &num2);
	printf("\nResultado: %.2f\n",num1+num2);
	
	return;
}

void subtrai()
{
	float num1, num2;
	printf("Informe os valores: ");
	scanf("%f %f", &num1, &num2);
	printf("\nResultado: %.2f\n",num1-num2);	
		
	return;
}

void multiplica()
{
	float num1, num2;
	printf("Informe os valores: ");
	scanf("%f %f", &num1, &num2);
	printf("\nResultado: %.2f\n",num1*num2);	
		
	return;
}

void divide()
{
	float num1, num2;		
	printf("Informe os valores: ");
	scanf("%f %f", &num1, &num2);
	printf("\nResultado: %.2f\n",num1/num2);	
	
	return;
}
