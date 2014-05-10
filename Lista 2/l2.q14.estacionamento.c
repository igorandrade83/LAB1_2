#include<stdio.h>

int calculo_tempo();
void calculo_pagamento(int hora_redonda);

int main()
{

	calculo_pagamento(calculo_tempo());
	system("pause");
	return 0;
}

int calculo_tempo()
{

	int hora_entrada, minuto_entrada, hora_saida, minuto_saida, hora_total, minuto_total;
	
	printf("informe a hora de chegada: ");
	scanf("%d %d", &hora_entrada, &minuto_entrada);
	printf("informe a hora de saida: ");
	scanf("%d %d", &hora_saida, &minuto_saida);	
	
	//verificando se carro dormiu no estacionamento.
	if((hora_saida < hora_entrada) || ((hora_saida == hora_entrada) && (minuto_saida < minuto_entrada))) 
	{
		hora_total = (hora_entrada - 24)*(-1)+hora_saida;
	}else
		hora_total = hora_saida - hora_entrada;
	
	//verifica minutos não exatos.
	if(minuto_entrada > minuto_saida) 
	{
		minuto_total = (minuto_entrada - minuto_saida - 60)*(-1);
		hora_total--;
	}else
		minuto_total = minuto_saida - minuto_entrada;
	
	//colocar um "0" antes de minutos menores que 10 pra não ficar: "5:1" - 5 horas e 1 minuto	
	if(minuto_total<10) 
		printf("\nTempo de permanencia do veiculo: %d:0%d\n", hora_total, minuto_total);
	else
		printf("\nTempo de permanencia do veiculo: %d:%.1d\n", hora_total, minuto_total);
	
	//Arredondando a hora para cima para o calculo do pagamento.
	if(minuto_total > 0)
	{
		hora_total++;
		minuto_total = 0;
	}	

	return hora_total;
}

void calculo_pagamento(int hora_redonda)
{
	float valor;
	
	if(hora_redonda < 3)
		valor = hora_redonda * 1;
	else
		if(hora_redonda < 5)
			valor = (hora_redonda - 2) * 1.40 + 2;
		else
			if(hora_redonda > 4)
				valor = (hora_redonda - 4) * 5 + 4.80;
	
	printf("Total a pagar R$ %.2f.\n\n", valor);
	
	return;
}
