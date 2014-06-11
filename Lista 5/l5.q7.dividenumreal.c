#include <stdio.h>
#include <math.h> 

	// Somente a função.
int Frac(float num, int *inteiro, float *frac)
{
	float delta;
	
	*inteiro = (int)num;
	*frac =  num-(*inteiro);

	return 0;
}
/*
int main()
{
	float a, x2;
	int x1;
	scanf("%f",&a);
	Frac(a,&x1, &x2);

	printf("numero: %f | inteiro: %d | resto: %.2f \n", a, x1, x2);

	system("pause");
	return 0;
}*/
