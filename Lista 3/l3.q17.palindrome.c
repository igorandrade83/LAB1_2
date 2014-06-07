#include<stdio.h>

int verifica_num(int num, int *cont)
{
	int verifica=0,i=0;
	char txt[7];

	sprintf(txt, "%d", num);
	(*cont)++;
	
	if(strlen(txt)%2==0) // verifica se o numero possui numero de digitos par.
	{
		do
		{
			if(txt[i] == txt[(strlen(txt)-1)-i]) //compara a primeira metade com a segunda de tras pra frente.
				{
					verifica = 1;
					i++;
				}
			else
				verifica = 0;

		}while(verifica==1 && i<(strlen(txt)/2)); //verifica se continua igual apos cada verificacao e se ja chegou na metade do numero de digitos.
		return verifica;
	}
	else
		return verifica;

}

void multiplica ()
{
	
	int i,j,num1, num2, result, palind=0, cont=0;

	for(i=1000; i>99; i--) // Faz a contagem para a multiplicação do 1o. numero
	{
		for(j=1000; j>99; j--) // Faz a contagem para a multiplicação do 2o. numero
		{
			result = 0;
			result = i*j;
			if(palind < result) // Verifica se o proximo palindrome achado é maior que o anterio salvo
			{
				if(verifica_num(result,&cont) == 1)
				{
				printf("%d\n",result);

					num1 = i;
					num2 = j;
					palind = result;
				}
			}	

		}
	}

	printf("cont = %d || Maior palindrome com multiplicacao de 3 digitos: %d * %d = %d\n",cont,num1,num2,palind);
	return;

}



int main()
{

	multiplica();
	system("pause");
	return 0;
}
