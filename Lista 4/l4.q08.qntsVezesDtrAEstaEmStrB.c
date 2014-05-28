#include<stdio.h>
#include<string.h>
#define tam 100

void contarepeticao(char *A, char *B)
{
	int i=0,j=0, cont, conta_repeticao=0;
	
	for(i=0; i<strlen(B); i++)
	{
		cont= 0;
		if(A[0] == B[i])	
		{
			for(j=0; j<strlen(A) ; j++)
				if(A[j] == B[i+j])
					cont++;	
		}
		if(strlen(A) == cont)
			conta_repeticao++;
		
	}
	printf("- Resultado: \"%s\" se repete %d vezes dentro de \"%s\".\n", A, conta_repeticao, B);
	return;	
}

void recebe()
{
	char A[tam],B[tam];
	printf("Informe o texto principal: ");
	gets(B);
	printf("Informe o trecho para verificar no princial: ");
	gets(A);
	contarepeticao(A,B);
	return;	
}

int main()
{
	
	recebe();
	system("pause");	
	return 0;
}
