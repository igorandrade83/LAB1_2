#include <stdio.h>
#include <math.h> 


int receba(int *p_inteiro,float *p_real,char *p_texto)
{

		printf("- ANTES: Inteiro: %d, real: %f, char: %c\n\n", *p_inteiro, *p_real, *p_texto);
		*p_inteiro = 1000;
		*p_real = 1000.001;
		*p_texto = 'Z';		
		printf("- DEPOIS: Inteiro: %d, real: %f, char: %c\n", *p_inteiro, *p_real, *p_texto);

	return ;
}

int main()
{
	int inteiro, *pinteiro;
	float real, *preal;
	char texto, *ptexto;
	
	inteiro = 10;
	real = 20.5;
	texto = 'Z';
	


	receba(&inteiro, &real, &texto);
	system("pause");
	return 0;
}
