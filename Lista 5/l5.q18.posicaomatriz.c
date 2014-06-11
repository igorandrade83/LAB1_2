#include<stdio.h>

void matriz(float **mat)
{
	int i,j;
	for(i= 0; i<3; i++)
	{
		for(j=0 ;j<3; j++)
		{
			printf("%i - ", &mat[i][j]);
		}	
		printf("\n\n");
	}

	return;	
}

int main()
{
	float mat[3][3];
	int i,j;

	for(i=0; i<3; i++)
	{
		printf("Digite 3 numeros para a %d linha: \n",i+1);
		for (j=0; j<3; j++)
			scanf("%f", &mat[1][2]);

	}
	matriz(mat);
	
	system("pause");
	return 0;
}
