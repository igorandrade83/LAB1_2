#include<stdio.h>

void mult3(int *num, int *i, int *contador)
{

	printf("informe numero: ");
	scanf("%d", *&num);
	
	for(*i=*num;*i>0;(*i)--)
	{
		if(*num%*i==0)
			(*contador)++;
	}
	if(*contador>2)	
		printf("Nao eh primo!\n");
	else 
		printf("Eh primo!\n");

	return;	
}

void recebe ()
{
	int num,i,cont=0;
	mult3(&num, &i, &cont);

	return;
}

int main()
{
	recebe();
	system("pause");
	return 0;
}
