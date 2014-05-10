#include <stdio.h>

int main()
{
	int excesso, peso, multa;
	printf("Informe o quilo do pescado: ");
	scanf("%d", &peso);
	
	if (peso<51)
       printf("Peso: %d \nExcesso: %d \nMulta: R$ %d\n\n",peso,0,0);
    else
    {
       printf("Peso: %d \nExcesso: %d \nMulta: R$ %d\n\n",peso,(50-peso)*(-1),-4*(50-peso));                    
     }     
	getchar();
	system("pause");
	return 0;
}


