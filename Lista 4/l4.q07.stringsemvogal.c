#include<stdio.h>
#include<string.h>
#define tam 100

/* Recebe um string e imprime sem vogal */

void tiravogal(char *txt)
{
	int i=0,j;
	while(i < strlen(txt))
	{
		//qnd txt[i] é uma vogal, ele entra no if e faz txt[j] = txt[j+1].
		if(txt[i] == 'a' || txt[i] == 'e' || txt[i] == 'i' || txt[i] == 'o' || txt[i] == 'u' || txt[i] == 'A' || txt[i] == 'E' || txt[i] == 'I' || txt[i] == 'O' || txt[i] == 'U' )
		{
			for(j=i;j < strlen(txt)+1; j++)
			{
				txt[j] = txt[j+1];	
			}	
			txt[j+1] = '\0';	
		}
		
		// Se txt[i] foi uma vogal eliminada acima este if pede pra fazer um novo loop pra confimar se a prox casa não era uma outra vogal, senao ele incrementa para o loop.
		if(txt[i] == 'a' || txt[i] == 'e' || txt[i] == 'i' || txt[i] == 'o' || txt[i] == 'u' || txt[i] == 'A' || txt[i] == 'E' || txt[i] == 'I' || txt[i] == 'O' || txt[i] == 'U' )
			continue;
		else
			i++;	
	}
	printf("%s\n",  txt);
	return;	
}

void recebe()
{
	char txt1[tam];
	gets(txt1);
	tiravogal(txt1);
	return;	
}

int main()
{

	recebe();
	system("pause");	
	return 0;
}
