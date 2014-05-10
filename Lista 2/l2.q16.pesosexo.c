#include <stdio.h>


int main()
{
	void calculopeso();
	
	calculopeso();
	system("pause");
	return 0;
}

void calculopeso()
{
	char sexo;
	float altura;
	
	printf("Informe seu sexo( (h) homem ou (m) mulher ): ");
	scanf("%c",&sexo);
	
	printf("Informe altura: ");
	scanf("%f", &altura);	

	switch(sexo)
	{
		case 'h': case 'H': printf("Peso ideal: %.2f\n\n", 72.7* altura -58 );
			break;
		case 'm': case 'M': printf("Peso ideal: %.2f\n\n", 62.1* altura - 44.7);
			break;		
	}
	return;
}
