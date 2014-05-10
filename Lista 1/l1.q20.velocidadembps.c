#include <stdio.h>

int main(){
	float mb, mbps;
	printf("Informe tamanho do arquivo (Mb) e velocidade (Mbps): ");
	scanf ("%f %f", &mb, &mbps);
	printf("\nTempo aproximado sera de %fmin", mb/mbps/60.0);	
	
	system("pause");
    return 0;
	
	
}
