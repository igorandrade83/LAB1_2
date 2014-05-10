#include <stdio.h>


int main()
{
	float calculoimc();
	void classificacao(float imc);
	
	classificacao(calculoimc());
	system("pause");
	return 0;
}

float calculoimc()
{
	float peso, altura, imc;
	
	printf("Informe peso: ");
	scanf("%f",&peso);
	
	printf("Informe altura: ");
	scanf("%f", &altura);	
	imc = peso/(altura*altura);
	printf("Seu IMC: %.2f - ", imc);
	return imc;
}

void classificacao(float imc)
{
	if(imc <18.6)
		printf("Classificacao: Abaixo do peso.\n");
	else
		if(imc <25)
			printf("Classificacao: Saudavel.\n");
		else
			if(imc <30)
				printf("Classificacao: Peso em excesso.\n");
			else
				if(imc <35)
					printf("Classificacao: Obesidade Grau I.\n");
				else
					if(imc <40)
						printf("Classificacao: Obesidade Grau II.\n");
					else printf("Classificacao: Obesidade Grau III.\n");

	return;
}
