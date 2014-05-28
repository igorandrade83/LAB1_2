#include<stdio.h>
#include<string.h>
#define tam 100
/* receber 2 strings e 1 inteiro positivo (N).
** concatenar os N primeiros caracteres na primeira string

*/

void concat(char *str1,char *str2,int *N)
{
	int i,j;
	
	for (i=strlen(str1),j=0; j < (*N) ; i++,j++)//Passa os N primeiros caracteres de str2 para str1 e depois insere um '\0'.
		str1[i] = str2[j];
	str1[i+1] = '\0';
	puts(str1);
	puts("\n");
	return;
}

void recebe()
{
	char str1[tam],str2[tam];
	int N;
	gets(str1);
	gets(str2);
	scanf("%d",&N);
	
	concat(str1,str2, &N);	
	return;	
}

int main()
{
	recebe();
	system("pause");	
	return 0;
}
