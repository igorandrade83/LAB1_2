#include <stdio.h>

int main(){
	float raio;
	float Area;
	scanf("%f",&raio);
	Area = 3.141592*raio*raio;	
	printf("A area do circulo de raio %f e %f", raio, Area);
	return(0);
}
