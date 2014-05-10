#include<stdio.h>
#include<math.h>

void ir(); // ir = Imposto de renda;

int main()
{
	ir();
    system("pause");
    return 0;   
}

void ir()
{
    int dias;
	float salario=30, desconto;
        
    printf("Informe quantidade de dias trabalhados: ");
    scanf("%d",&dias);
    
    salario = salario *(float)dias;
    desconto = salario * 0.08;

    printf("\nSalario liquido (descontado 8%% do IR): %.2f\n", salario-desconto);
	
	return;
}
