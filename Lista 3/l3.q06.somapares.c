#include<stdio.h>

void somapar(int *x, int *y)
{
	for(*x=1;*x<50;(*x)++)
	{
		(*x)++;
		*y = *y+(*x);
	
	}
	return;	
}

void recebe ()
{
	int i,j=0;
	somapar(&i,&j);
	printf("%d\n",j);

	return;
}

int main()
{
	recebe();
	system("pause");
	return 0;
}
