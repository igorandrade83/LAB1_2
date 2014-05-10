#include<stdio.h>
#include<math.h>
int main()
{
    int antecessor(int valor),sucessor(int valor), num;
    printf("Informe um numero: ");
    scanf("%d", &num);
    
    printf("\nSeu antecessor: %d\nSeu sucessor: %d\n ", antecessor(num), sucessor(num));
    
    system("pause");
    
    return 0;   
    
    
}

int antecessor(int valor)
{
	return (--valor);
}

int sucessor(int valor)
{
	return (++valor);
}
