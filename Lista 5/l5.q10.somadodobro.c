#include <stdio.h>
#include <math.h> 

int dobro(int *a, int *b)
{
	*a = (*a)+(*a);
	*b = (*b)+(*b);	

	return (*a) + (*b);
}

int receba()
{
	int a, b;
	
	printf("informe a e b:");
	scanf("%d %d", &a, &b);
	printf("%d", dobro(&a,&b));

	return 0;
}
/*
int main()
{
	receba();
	system("pause");
	return 0;
}*/
