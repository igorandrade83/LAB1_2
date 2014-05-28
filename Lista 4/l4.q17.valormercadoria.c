#include<stdio.h>

#define tam 15

void produto()
{
	float valor;
	char mercadoria[tam];
	
	printf("Digite nome da mercadoria: ");
	scanf("%[^\n]s",mercadoria);
	printf("Informe valor: ");
	scanf("%f", &valor);
	
	printf("--------------------------\n|produto: %s \n|valor: %.2f \n|desconto a vista: 10%% \n|preco com desconto: %.2f\n--------------------------\n", mercadoria, valor,  valor-(valor*0.1));
	
	return;	
}

int main()
{
	produto();
	system("pause");
	return 0;	
}
