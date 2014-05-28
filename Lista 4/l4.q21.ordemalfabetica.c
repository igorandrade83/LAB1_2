#include<stdio.h>
#include<ctype.h>

#define tam 30

char *verifica(char *p1, char *p2)
{

	int i;
	
	for(i=0; i<strlen(p1); i++)
		if(tolower(p1[i]) != tolower(p2[i]) )
			if(tolower(p1[i]) < tolower(p2[i]))
				return p1;
			else
				return p2;
	return "As 2 sao iguais!";
}

char * recebe()
{
	char *p1, *p2;
	
	p1 = (char *)malloc(sizeof(char)*tam);
	p2 = (char *)malloc(sizeof(char)*tam);
	
	printf("primeira palavra: ");
	gets(p1);
	printf("segunda palavra: ");
	gets(p2);
	
	return verifica(p1,p2);
}

int main()
{
		
	printf("A primeira em ordem alfabetica eh: %s\n", recebe());
	system("pause");
	return 0;
}
