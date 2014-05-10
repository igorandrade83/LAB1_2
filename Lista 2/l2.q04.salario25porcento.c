#include<stdio.h>
#include<math.h>

float percento();

int main()
{
   
	percento();    
    system("pause");
    
    return 0;    
}

float percento()
{
    float valor;
    printf("Informe salario: ");
    scanf("%f", &valor);
    valor = valor+valor*0.25;
    printf("\nResultado: %.2f\n", valor);
    return 0;
}
