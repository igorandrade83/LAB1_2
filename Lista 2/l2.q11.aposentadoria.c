#include<stdio.h>

int main()
{
	void aposenta();
	
	aposenta();
	system("pause");
	return 0;
}

void aposenta()
{
	int idade, tempo;

	printf("Informe a idade do trabalhador: ");
	scanf("%d", &idade);
	printf("Infome o tempo de servico: ");
	scanf("%d", &tempo);	
	printf("\n");

	if ((idade > 64) || (tempo > 29) || ((idade >59) && (tempo > 24)))
	{
		printf("O trabalhador ja pode se aposentar.\n\n");		
	}
	else printf("O trabalhador ainda nao pode se aposentar.\n\n");
	
	return;
}
