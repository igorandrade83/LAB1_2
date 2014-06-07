#include<stdio.h>

void mult3(int *pi)
{
	for(*pi=1;*pi<6;(*pi)++)
	{
		printf("%d\n",3*(*pi));	
	}
	return;	
}

void recebe ()
{
	int i;
	mult3(&i);

	return;
}


int main()
{
	recebe ();
	system("pause");
	return 0;
}
