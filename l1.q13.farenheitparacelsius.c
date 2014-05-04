#include <stdio.h>


int main(){
	float temperatura;
	printf("informe a temperatura em Fahrenheit\n");
	scanf("%f", &temperatura);
	printf("%f graus Fahrenheit eh %f celsius.",temperatura, (5 * (temperatura-32) / 9));
	return (0);
}
