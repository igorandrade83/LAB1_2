#include<stdio.h>

int main()
{
	int num;
	int inverte(int num);
     
	printf("Informe numero a ser invertido: ");	
	scanf("%d", &num);
	
	inverte(num);
	system("pause");
	return 0;     
}

int inverte(int num)
{
	int div (int num);
	int uni, dez, cem;
	
	cem = num % 10;
	num = div(num);
	dez = num % 10;
	uni = div(num);
	
	printf("Numero invertido: %d\n", cem*100+dez*10+uni); 
	return 0;
}

int div (int num)
{
	return num = num / 10;	
}
