#include<stdio.h>

//retornando uma string 

char *muda(int *pi, int *pcont, char *pbin)
{
    scanf("%[^\n]s", pbin); 
    
    for (*pi=0;*pi<strlen(pbin);(*pi)++)
    {
        if (pbin[*pi]=='0')
            pbin[*pi]='1';  
    }
	return pbin;	
}

int main()
{
    int i,cont=0;
    char bin[100];
    
    printf("\nalteracao feita!\n%s.\n", muda(&i, &cont, bin));
    
    system("pause");    
    return 0;
}
