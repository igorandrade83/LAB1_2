#include <stdio.h>

struct prod
{
	int cod;
	char desc[50];
	int quant;
	struct prod *prox;
	struct prod *ant;
};

void Menu();
void Insere(struct prod *Lista);
void Exibe(struct prod *Lista);
void Apaga(struct prod *Lista);
void SalvaArquivo(struct prod *Lista, FILE *arquivo );
int main()
{


	Menu();




	system("pause");
	return 0;
}


void Menu()
{
	int op;
	FILE *arquivo;
	struct prod *Lista= (struct prod *)malloc(sizeof(struct prod));
	Lista->prox =NULL;
	Lista->ant =NULL;

	while(1)
	{
		printf("Informe Opcao: ");
		scanf("%d", &op);
		system("cls");

		switch (op)
		{
			case 1:
			{
				Insere(Lista);
				break;
			}
			case 2:
			{
				Exibe(Lista);
				break;
			}
			case 3:
			{
				Apaga(Lista);
				break;
			}
			case 4:
			{
				SalvaArquivo(Lista,arquivo );
				break;
			}
			default:
			{
				break;
			}
		}
	}



	return;
}


void Insere(struct prod *Lista)
{

	struct prod *Novo = (struct prod *)malloc(sizeof(struct prod));
	int i;

	Novo->prox = NULL;
	Novo->ant = NULL;

	printf("Descricao: ");
	scanf("\n\r%[^\n]", &Novo->desc);
	fflush(stdin);
	printf("Codigo: ");
	scanf("%d", &Novo->cod);
	printf("Quantidade em estoque: ");
	scanf("%d", &Novo->quant);



	if(Lista->prox == NULL)
	{
		Lista->prox = Novo;
	}

	else
	{
		struct prod *corre = Lista->prox;
		while(corre->prox != NULL)
		{
			corre = corre->prox;
		}

		corre->prox = Novo;
		Novo->ant = corre;
	}

	return;
}

void Exibe(struct prod *Lista)
{
	struct prod *corre = Lista->prox;

	if(Lista->prox == NULL)
		printf("Lista vazia.\n");
	else
	{
		while(corre->prox != NULL)
		{
			printf("\nCodigo: %d", corre->cod);
			printf("\nDescricao: %s", corre->desc);
			printf("\nEstoque: %d\n", corre->quant);
			corre = corre->prox;
		}
			printf("\nCodigo: %d", corre->cod);
			printf("\nDescricao: %s", corre->desc);
			printf("\nEstoque: %d\n", corre->quant);
	}

	return;
}

void Apaga(struct prod *Lista)
{
	struct prod *corre = Lista->prox;
	struct prod *aux = Lista->prox;
	int procura;
	printf("\nInforme o codigo do produto para apagar: ");
	scanf("%d", &procura);

	if(Lista->prox == NULL)
		printf("Lista vazia.\n");
	else
	{
		if(procura == corre->cod)
			{
				Lista->prox = Lista->prox->prox;
				corre = corre->prox;
				corre->ant = Lista;
				free(aux);
			}
		while(corre->prox != NULL)
		{
			if(procura == corre->cod)
			{

				aux = corre;
				corre = corre->ant;
				corre->prox = corre->prox->prox;
				corre = aux->prox;
				corre->ant = corre->ant->ant;
				corre = corre->ant;
				free(aux);
				break;
			}
			corre = corre->prox;
		}
		if(procura == corre->cod)
			{
				aux = corre;
				corre = corre->ant;
				corre->prox = NULL;
				free(aux);
			}
	}
	return;
}

void SalvaArquivo(struct prod *Lista, FILE *arquivo )
{
	struct prod *corre = Lista->prox;
	arquivo = fopen("despensa.txt","wb+");
	if(arquivo == NULL)
	{
		printf("Nao foi possivel criar/abrir o arquivo.\n");
		exit(1);
	}

	if(Lista->prox == NULL)
		printf("Lista vazia.\n");
	else
	{
		while(corre->prox != NULL)
		{
			fprintf(arquivo,"Codigo: %d\tEstoque: %d\tDescricao: %s\n", corre->cod, corre->quant, corre->desc);
			corre = corre->prox;
		}
		fprintf(arquivo,"Codigo: %d\tEstoque: %d\tDescricao: %s\n", corre->cod, corre->quant, corre->desc);
	}
	fclose(arquivo);
	return;
}
