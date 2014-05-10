#include<stdio.h>
#include<math.h>

void divisao(float valor);

int main()
{
    float premio=780.000;
	divisao(premio);
    
    system("pause");
    return 0;   
} 

void divisao(float valor)
{
	float ganhador1, ganhador2, ganhador3;
	
	ganhador1 = valor*0.46;
    ganhador2 = valor*0.32;
    ganhador3 = valor-(ganhador1+ganhador2);
    printf("\n:: Resultado :: \nGanhador 1: %.2f\nGanhador 2: %.2f\nGanhador 3: %.2f\n\n", ganhador1, ganhador2,ganhador3);

	return;
}
