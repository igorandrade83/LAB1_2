#include<stdio.h>
#include<string.h>
#define tam 100


void caixa_baixa(char *txt1)
{
	int i;
	for(i=0; i<strlen(txt1)+1; i++)
	{
		if(txt1[i] >= 'a' && txt1[i] <= 'z')
			txt1[i] = txt1[i] - 32;	
	}
	
	printf("%s", txt1);
	return;
}

void recebe()
{
	char txt1[tam];
	gets(txt1);
	caixa_baixa(txt1);
	return;	
}

int main()
{
	recebe();
	
	system("pause");	
	return 0;
}
