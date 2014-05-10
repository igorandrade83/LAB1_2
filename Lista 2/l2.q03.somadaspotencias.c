#include<stdio.h>
#include<math.h>

int calculo();

int main()
{
	calculo();
    system("pause");
    return 0;   
}

int calculo()
{
    
    int x, y, z;
    printf("Informe 3 valores: ");
    scanf("%d %d %d", &x, &y, &z);    

    x = (x*x)+(y*y)+(z*z);
    printf("\nResultado: %d\n", x);	
	
	return 0;
}
