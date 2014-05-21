#include<stdio.h>

int fsoma(int long *psoma)
{
	int mult3=1;
	
	for(mult3=1;mult3<1001;mult3++)
		*psoma = *psoma + (mult3*3) + (mult3*5);		
		
	return *psoma;	
}

int main()
{
	int long soma=0;
	
	printf("%d\n", fsoma(&soma));
	system("pause");	
	return 0;
}
