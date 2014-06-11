#include <stdio.h>


void le_nota(float *A,float *B)
{

	int aux,verifica=1;
	printf("Informe n1 e n2: ");
	scanf("%f", &(*A));
	scanf("%f", &(*B));

	return ;
}

void exibe_dados(float A,float B)
{
	printf("media simples: %.2f\nmedia ponderada: %.2f\n", A, B);
	
	return;	
}

void calc_media(float *A,float *B)
{
	float m_simples, m_ponderada;
	
	m_simples = ((*A)+(*B))/2;
	
	m_ponderada = ((*A)+(*B)*2)/3;
	
	exibe_dados(m_simples,m_ponderada);
	
	return;	
}



int main()
{
	float n1, n2;
	
	le_nota(&n1, &n2);
	calc_media(&n1, &n2);

	system("pause");
	return 0;
}
