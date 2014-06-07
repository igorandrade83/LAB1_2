#include<stdio.h>

int fsoma(int long *psoma)
{
	int cont=0;
	
	while(cont<1001)
	{
		cont+=5;
		*psoma = *psoma + cont;		
	}
	cont=0;
	while(cont<1001)
	{
		cont+=3;
		*psoma = *psoma + cont;		
	}	
	return *psoma;	
}

void recebe ()
{
	int long soma=0;
	printf("%d\n", fsoma(&soma));

	return;
}

int main()
{
	recebe();
	system("pause");	
	return 0;
}
