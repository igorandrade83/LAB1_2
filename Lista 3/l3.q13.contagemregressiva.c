#include<stdio.h>
void conta(int *i)
{
	while(*i>-1)
	{
		printf("%d\n",(*i)--);
	}
}

void recebe ()
{
	int i=10;
	conta(&i);	
	printf("FIM!\n");

	return;
}

int main()
{
	recebe();
	system("pause");
	return 0;
}
