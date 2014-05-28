#include<stdio.h>
#include<string.h>
#define tam 100

void verifica(char *string1, char *string2)
{
	if(strcoll(string1,string2) == 0)
		puts("Iguais.\n");
	else
		puts("Diferentes\n");
	return;	
}

void recebe()
{
	char string1[tam], string2[tam];
	printf("string1: ");
	gets(string1);
	printf("string2: ");
	gets(string2);
	verifica(string1, string2);
	return;
}


int main()
{
	recebe();	
	system("pause");	
	return 0;
}
