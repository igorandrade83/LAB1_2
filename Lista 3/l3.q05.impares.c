#include<stdio.h>

void mult3(int *x,int *y)
{

	printf("informe valor: ");
	scanf("%d", &*y);	
	for(*x=0;*x<*y;(*x)++)
	{
		(*x)++;
		printf("%d\n",*x);	
	}
	return;	
}

int main()
{
	int i,j;
	mult3(&i, &j);
	system("pause");
	return 0;
}
