#include<stdio.h>
void conta(int *i)
{
	while(*i>-1)
	{
		printf("%d\n",(*i)--);
	}
}
int main()
{
	int i=10;
	conta(&i);	
	printf("FIM!\n");
	system("pause");
	return 0;
}
