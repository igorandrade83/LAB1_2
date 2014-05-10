#include<stdio.h>
#include<math.h>

void menu(void);
void geo(void);
void pon(void);	
void har(void);	
void ari(void);

int main ()
{
	menu();
	system("pause");
	return 0;
}

void menu()
{
	int op;
	do
	{
		printf("    ::: Media :::    \n\n");
		printf("1 - Geometrica.\n");
		printf("2 - Ponderada.\n");
		printf("3 - Harmonica.\n");
		printf("4 - Aritmetica.\n");
		printf("\nInforme a operacao: ");
		scanf("%d", &op);
		
		if (op>4 || op<1)
		{
			system("cls");
			printf("Opcao inexistente! Informe um valor entre 1 e 4.\nAguarde...");
			_sleep(2500);
			system("cls");	
		}	
	}
	while(op>4 || op<1);

	switch(op)
	{
		case 1: geo();
			break;
		case 2: pon();
			break;
		case 3: har();
			break;
		case 4: ari();
			break;
	}
	return;
}


void geo()
{
	float x, y, z, result;
	printf("\nInforme 3 valores: ");
	scanf("%f %f %f", &x, &y, &z);
	
	result = cbrt(x*y*z);
	printf("\nResultado: %.2f\n",result);	
	return;
}

void pon()
{
	float x, y, z, result;
	printf("\nInforme 3 valores: ");
	scanf("%f %f %f", &x, &y, &z);
	
	result = (x+2*y+3*z)/6;
	printf("\nResultado: %.2f\n",result);	
	return;
}

void har()
{
	float x, y, z, result;
	printf("\nInforme 3 valores (diferentes de zero): ");
	scanf("%f %f %f", &x, &y, &z);
	
	result =  1/(1/x+1/x*z);
	printf("\nResultado: %.2f\n",result);		
	return;
}

void ari()
{
	float x, y, z, result;
	printf("\nInforme 3 valores: ");
	scanf("%f %f %f", &x, &y, &z);

	result =  x+y+z/3;
	printf("\nResultado: %.2f\n",result);
	
	return;
}
