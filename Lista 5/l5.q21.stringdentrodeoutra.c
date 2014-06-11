#include<stdio.h>
#include <string.h>

int receba(char *frase, char *pesquisa)
{
	int loop=0, repete=0,i, tam = strlen(pesquisa);
	
	

	for (i=0;i<31;i++)
	{
		if( *(frase+i) == *(pesquisa+0) )
		{
			loop =0;
			
			while(loop < tam+1)
			{
				if(*(frase+i+loop) == *(pesquisa+loop) )
				{
					loop++;	
				}
				else
					break;
					
				if (loop == tam)
					repete++;
			}
				
		}

	}

	return repete;
}



int main()
{
	char frase1[30], frase2[30];

	printf("Informe frase: ");
	gets(frase1);
	printf("Informe pesquisa: ");
	gets(frase2);

	printf("\nrepeticoes: %d\n\n", receba(frase1, frase2));
	system("pause");
	return 0;
}

