#include <stdio.h>

void caso_especial(char *frase,int *i)
{
    if(frase[*i] > 119 && frase[*i] < 123)
        frase[*i] = frase[*i]-26;

    if(frase[*i] == 32)
        frase[*i] = 29;
    return;
}

void cripto (char *frase)
{
    int i=0;
    while(frase[i] != '\0')
    {
        caso_especial(frase, &i);
        printf("%c",frase[i]+3);
        i++;
    }
    return;
}

int main()
{
    char frase[100];

    printf("Informe a frase que sera criptografada: ");
    scanf("%[^\n]s", &frase);
    cripto(frase);
    
    system("pause");
    return 0;
}
