#include"stdio.h"

int main(){
	float celsius;
	scanf("%f", &celsius);
	printf("%f graus Celsius eh %f Fahrenheit.", celsius, (celsius*1.8 + 32.0));
	return 0;
}
