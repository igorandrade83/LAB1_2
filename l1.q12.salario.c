#include <stdio.h>


int main(){
	int hr;
	float salario;
	printf("digite qnt ganha por hr: ");
	scanf("%d", &hr);
	printf("informe qnts horas trabalha por mes: ");
	scanf("%f",&salario);

	printf("salario mensal %f", salario+hr);
	return (0);
}
