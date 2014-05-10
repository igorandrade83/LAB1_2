#include <stdio.h>


int main(){
    int hora, salario;
	float ir, inss, sindicato, sal_liquido, sal_bruto;
	printf("digite qnt ganha por hora: ");
	scanf("%d", &hora);
	printf("informe qnts horas trabalha por mes: ");
	scanf("%d",&salario);
	
	
    sal_bruto = ((float)salario * (float)hora); //salário bruto
    ir = sal_bruto * ((float)11/(float)100); //desconto do inss;
    sal_liquido = sal_bruto - ir;
    inss = sal_liquido * ((float)8/(float)100); //desconto do inss;
    sal_liquido = sal_liquido - inss;
    sindicato = sal_liquido * ((float)5/(float)100); //desconto do sindicato;
    sal_liquido = sal_liquido - sindicato;
  
	printf("\n+ Salario Bruto: R$ %.2f", sal_bruto);
	printf("\n- IR(11%%): R$ %.2f", ir);	
	printf("\n- INSS(8%%): R$ %.2f", inss);
	printf("\n- Sindicato(5%%): R$ %.2f", sindicato);
    printf("\n= Salario liquido: R$ %.2f\n\n", sal_liquido);

    	
	system("pause");
	return (0);
}
