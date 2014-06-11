#include<stdio.h>

void maior_endereco(int *num1,int *num2)
{

	if (&num1 > &num2)
		printf("%i\n",&num1);
	else
		printf("%i\n",&num2);
	
	return;
}

void receba()
{
	int a,b;
	printf("digite dois numero: ");
	scanf("%d %d", &a, &b);
	
	maior_endereco(&a,&b);	
	return;
}
int main()
{
	receba();
	system("pause");
	return 0;
}
