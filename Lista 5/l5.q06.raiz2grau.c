#include <stdio.h>
#include <math.h> 

int raiz(float a, float b, float c, float * x1, float * x2)
{
	float delta;
	
	delta = (b*b)-(4*a*c);

	if (delta < 0)
		return 0;
	else 
		if (delta == 0)
		{
			*x1 = ((-(b) + (sqrt(delta))) / (2*(a)));
			return 1;
		}
		else // Maior que 0.
		{
			*x1 = ((-(b) + (sqrt(delta))) / (2*(a)));
			*x2 = ((-(b) - (sqrt(delta))) / (2*(a)));
			return 2;
		}
}
/*
int main()
{
	float a, b,c, x1,x2, result;
	scanf("%f %f %f",&a,&b,&c);
	result = raiz(a,b,c, &x1, &x2);

	printf("delta: %.0f | x1: %.2f | x1: %.2f \n", result, x1, x2);

	system("pause");
	return 0;
}*/
