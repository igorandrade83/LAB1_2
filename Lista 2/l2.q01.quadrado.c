#include<stdio.h>
#include<math.h>
int main()
{
    void quadrado();
    
    quadrado();
    system("pause");
    return 0;   
    
    
}

void quadrado()
{
    float num2;
    
    printf("Informe um valor real: ");
    scanf("%f", &num2);
    printf("%.0f\n\n", num2*num2);
    
    return;
}
