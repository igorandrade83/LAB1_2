#include<stdio.h>
#include<string.h>
#define tam 100

void verifica(char *txt1, char *txt2)
{
	int i,j;
	
	for (i=strlen(txt2),j=strlen(txt1); i> -1; i--,j--)
		if (txt1[j] != txt2[i])
		{
			printf("Segunda frase nao esta contida na primeira\n\n");
			return;
		}
	puts(txt2);
	return;	
}

void recebe()
{
	char txt1[tam], txt2[tam];
	
	gets(txt1);
	gets(txt2);
	verifica(txt1, txt2);
	
	return;	
}

int main()
{
	recebe();
	system("pause");	
	return 0;
}
