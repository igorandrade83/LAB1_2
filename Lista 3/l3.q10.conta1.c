#include<stdio.h>

//Passando string por referencia;

void calc(int *pi, int *pcont, char *pbin)
{
	for ((*pi)=0;*pi<strlen(pbin);(*pi)++)
		if (pbin[*pi]=='1')
			(*pcont)++;  
	
	printf("existem %d 1's.\n", *pcont);
	return;
}

void recebe ()
{
	int i,cont=0;
	char bin[100];
	scanf("%s", &bin);
	calc(&i, &cont, bin);

	return;
}

int main()
{

	recebe();
	system("pause");    
	return 0;
}
