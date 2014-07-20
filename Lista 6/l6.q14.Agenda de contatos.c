#include <stdio.h>

struct prod
{
	char Nome[50];
	int telefone;
	int ndia;
	int nmes;
	struct prod *prox;
	struct prod *ant;
};

void Menu();
void AbrirArquivo(struct prod *Lista, FILE *arquivo );
void Insere(struct prod *Lista);
void Exibe(struct prod *Lista);
void Apaga(struct prod *Lista);
void Pesquisar(struct prod *Lista);
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
	AbrirArquivo(Lista,arquivo );
	while(1)
	{
		system("cls");
		printf("0 - Abrir Arquivo\n");
		printf("1 - Insere\n");
		printf("2 - Exibe\n");
		printf("3 - Apaga\n");
		printf("4 - Pesquiar\n");
		printf("5 - Salvar\n");
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
				Pesquisar(Lista);
				break;
			}
			case 5:
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

void AbrirArquivo(struct prod *Lista, FILE *arquivo )
{
	arquivo = fopen("agenda.txt","r");
	struct prod *Novo;
	struct prod *corre = Lista->prox;

	while(!feof(arquivo))
	{
		Novo = (struct prod *)malloc(sizeof(struct prod));

		Novo->prox = NULL;
		Novo->ant = NULL;

		fscanf(arquivo,"Nome: %[^\t]\tTelefone: %d\tAniversario: %d/%d\n", &Novo->Nome, &Novo->telefone, &Novo->ndia, &Novo->nmes);

		if(Lista->prox == NULL)
		{
			Lista->prox = Novo;
		}

		else
		{

			while(corre->prox != NULL)
			{
				corre = corre->prox;
			}

			corre->prox = Novo;
			Novo->ant = corre;
		}
		corre = Lista->prox;
	}
	fclose(arquivo);
	system("pause");
	return;
}


void Insere(struct prod *Lista)
{

	struct prod *Novo = (struct prod *)malloc(sizeof(struct prod));
	int i;

	Novo->prox = NULL;
	Novo->ant = NULL;

	printf("Nome: ");
	scanf("\n\r%[^\n]", &Novo->Nome);
	fflush(stdin);
	printf("Telefone: ");
	scanf("%d", &Novo->telefone);
	printf("Aniversario (dd/mm): ");
	scanf("%d/%d", &Novo->ndia,&Novo->nmes);



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
			printf("\nNome: %s", corre->Nome);
			printf("\nTelefone: %d", corre->telefone);
			printf("\nAniversario: %d/%d\n", corre->ndia, corre->nmes);
			corre = corre->prox;
		}
			printf("\nNome: %s", corre->Nome);
			printf("\nTelefone: %d", corre->telefone);
			printf("\nAniversario: %d/%d\n", corre->ndia, corre->nmes);
	}
	system("pause");
	return;
}

void Apaga(struct prod *Lista)
{
	struct prod *corre = Lista->prox;
	struct prod *aux = Lista->prox;
	char procura[50];
	printf("\nInforme contato para apagar: ");
	scanf("\n\r%[^\n]", &procura);

	if(Lista->prox == NULL)
		printf("Lista vazia.\n");
	else
	{
		if(corre->prox == NULL)
		{
			if(stricmp(corre->Nome,procura)== 0)
				{
					Lista->prox = NULL;
					free(corre);
				}
		}
		else
		{
			if(stricmp(corre->Nome,procura)== 0)
				{
					Lista->prox = Lista->prox->prox;
					corre = corre->prox;
					corre->ant = Lista;
					free(aux);
				}
			while(corre->prox != NULL)
			{
				if(stricmp(corre->Nome,procura)== 0)
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
			if(stricmp(corre->Nome,procura)== 0)
				{
					aux = corre;
					corre = corre->ant;
					corre->prox = NULL;
					free(aux);
				}
		}
	}
	return;
}

void Pesquisar(struct prod *Lista)
{
	struct prod *corre = Lista->prox;
	char procura[50];

	printf("\nInforme contato para apagar: ");
	scanf("\n\r%[^\n]", &procura);

	if(Lista->prox == NULL)
		printf("Lista vazia.\n");
	else
	{
		while(corre->prox != NULL)
		{
			if(stricmp(corre->Nome,procura)== 0)
				{
					printf("\nNome: %s", corre->Nome);
					printf("\nTelefone: %d", corre->telefone);
					printf("\nAniversario: %d/%d\n", corre->ndia, corre->nmes);
					system("pause");

				}
				corre = corre->prox;
		}

		if(stricmp(corre->Nome,procura)== 0)
		{
			printf("\nNome: %s", corre->Nome);
			printf("\nTelefone: %d", corre->telefone);
			printf("\nAniversario: %d/%d\n", corre->ndia, corre->nmes);
			system("pause");
		}
	}

	return;
}


void SalvaArquivo(struct prod *Lista, FILE *arquivo )
{
	arquivo = fopen("agenda.txt","w");
	struct prod *corre = Lista->prox;
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
			fprintf(arquivo,"Nome: %s\tTelefone: %d\tAniversario: %d/%d\n", corre->Nome, corre->telefone, corre->ndia, corre->nmes);
			corre = corre->prox;
		}
		fprintf(arquivo,"Nome: %s\tTelefone: %d\tAniversario: %d/%d\n", corre->Nome, corre->telefone, corre->ndia, corre->nmes);
	}
	fclose(arquivo);
	return;
}
