#include <stdio.h>
/*
* Receber um vetor e gravar em um arquivo binario.
*/
void ChamaFuncoes();

int main()
{
	ChamaFuncoes();

	system("pause");
	return 0;
}

void ChamaFuncoes()
{
	FILE * arquivo;
	int n,i;

	printf("Informe tamanho do vetor: ");
	scanf("%d", &n);

	int vetor[n];

	arquivo = fopen("ArquivoBinario.txt","wb");
	if(arquivo == NULL)
	{
		printf("Nao foi possivel criar/abrir o arquivo.\n");
		exit(1);
	}

	for(i=0;i<n;i++)
	{
		scanf("%d", &vetor[i]);
		fwrite(&vetor[i], sizeof(int), 1, arquivo);
	}

	fclose(arquivo);
	return;
}
