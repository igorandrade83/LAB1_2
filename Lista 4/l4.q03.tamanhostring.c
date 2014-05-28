#include <stdio.h>

void tamanho()
{
	char string[50];
	scanf("%[^\n]s", &string);
	printf("%d", strlen(string));
	return;	
}

int main ()
{
	tamanho();
	
	system("pause");
	return 0;	
}
