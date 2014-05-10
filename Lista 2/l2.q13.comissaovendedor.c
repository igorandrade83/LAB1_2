#include<stdio.h>

void comissao();

int main()
{
	comissao();
	system("pause");
	return 0;
}

void comissao()
{
	float venda,porcento;
	printf("Informe o total de vendas mensal do vendedor: ");
	scanf("%f", &venda);
	printf("\n");
	
	if (venda < 20000.00)
	{
		porcento = venda*0.14;
		printf("Salário do vendedor R$ %f.", 400+porcento);
	}
	else
		if (venda < 40000.00)
		{
			porcento = venda*0.14;
			printf("Salario do vendedor R$ %.2f.\n", 500+porcento);			
		}else
			if (venda < 60000.00)
			{
				porcento = venda*0.14;
				printf("Salario do vendedor R$ %.2f.\n", 550+porcento);			
			}else
				if (venda < 80000.00)
				{
					porcento = venda*0.14;
					printf("Salario do vendedor R$ %.2f.\n", 600+porcento);			
				}else
					if (venda < 100000.00)
					{
						porcento = venda*0.14;
						printf("Salario do vendedor R$ %.2f.\n", 650+porcento);			
					}else
					{
						porcento = venda*0.16;
						printf("Salario do vendedor R$ %.2f.\n", 700+porcento);
					}
	return;
}
