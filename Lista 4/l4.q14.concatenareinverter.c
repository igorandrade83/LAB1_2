#include<stdio.h>

#define tam 15

int inverte(char *str1, char *str2)
{
	int i, palind=0;
	for(i=0;i<strlen(str1);i++) 			// passa str1 para str2 invertida.
		str2[i] = str1[strlen(str1)-i-1];	
	str2[strlen(str1)] = '\0';			// finaliza str2.
		
	for(i=0;i<strlen(str1);i++)			// Verifica se eh palindrome e retorna.	
		if(str1[i] == str2[i])
			continue;
		else
			palind = 1;
	
	return palind;	
}

void recebe(char *str1)
{
	gets(str1);
	return;	
}

int main()
{
	char str1[tam];
	char str2[tam];
	
	recebe(str1);
	
	if (inverte(str1,str2) == 1)			//imprimi o teste de palindrome.
		printf("\nNao eh palindrome\n");
	else
		printf("\nEh Palindrome\n");
	puts(str1);
	puts(str2);

	system("pause");
	return 0;	
}
