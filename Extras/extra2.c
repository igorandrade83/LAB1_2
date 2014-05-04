#include <stdio.h>

// atribuições multiplas com tipos diferentes.
// o char recebe num número e reconhece como um valor da tabela ascii.
int main()
{
	int num;
	char letra;
	
	num = letra = 72;
	printf("%c",letra);

	return 0;
}

