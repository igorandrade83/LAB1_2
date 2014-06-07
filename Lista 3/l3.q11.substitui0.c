#include<stdio.h>

//retornando uma string 

char *muda(int *pi, int *pcont, char *pbin)
{
    scanf("%[^\n]s", pbin); 
    
    while (*pi<strlen(pbin))
    {
		if (pbin[*pi]=='0')
			pbin[*pi]='1';  
		(*pi)++;
    }
	return pbin;	
}


void recebe ()
{
    int i=0,cont=0;
    char bin[100];
    
    printf("\nalteracao feita!\n%s.\n", muda(&i, &cont, bin));

	return;
}

int main()
{
	recebe();
    
    system("pause");    
    return 0;
}
