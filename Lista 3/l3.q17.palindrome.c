#include<stdio.h>

int verifica_num(int num)
{
	int verifica=0,i=0;
	char txt[7];
	
	sprintf(txt, "%d", num);
	
	
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

int main()
{
	int i,j,num1, num2, result, palind=0;
	
	for(i=9; i<100; i++) // Faz a contagem para a multiplicação do 1o. numero
	{
		for(j=9; j<100; j++) // Faz a contagem para a multiplicação do 2o. numero
		{
			result =0;
			result = i*j;
			if(verifica_num(result) == 1)
			{
				if(palind < result) // Verifica se o proximo palindrome achado é maior que o anterio salvo
				{
					num1 = i;
					num2 = j;
					palind = result;
				}
			}	
			
		}
	}
	
	printf("Maior palindrome com multiplicacao de 3 digitos: %d * %d = %d\n",num1,num2,palind);
	
	
	system("pause");
	return 0;
}

