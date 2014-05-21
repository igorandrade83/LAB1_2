#include<stdio.h>

void mult3(int *pi)
{
	for(*pi=1;*pi<6;(*pi)++)
	{
		printf("%d\n",3*(*pi));	
	}
	return;	
}

int main()
{
	int i;
	mult3(&i);
	system("pause");
	return 0;
}
