#include<stdio.h>
#include<math.h>

int main()
{
    void triangulo();
 	triangulo(); 
    system("pause");  
    return 0;   
}

void triangulo()
{
    float cat1, cat2;

    printf("Informe os valores dos catetos: ");
    scanf("%f %f",&cat1, &cat2);
    printf("\nHipotenusa = %.2f\n",sqrt((cat1*cat1)+(cat2*cat2)) );
    
    return;
}
