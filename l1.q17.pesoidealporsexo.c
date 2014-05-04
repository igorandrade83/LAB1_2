#include <stdio.h>


int main(){
	
	printf("Informe altura: ");
	float altura;
	int sexo;
	scanf("%f", &altura);
	printf("Informe sexo ( masc (1) e femin(2) ):");
	scanf("%d");

	if(sexo==1)
	{
		printf("\npeso ideal: %f\n",(72.7*altura)-58);
	}
	else
	{
		printf("\npeso ideal: %f\n",(62.1*altura)-44.7);
	}
	
	return 0;
}
