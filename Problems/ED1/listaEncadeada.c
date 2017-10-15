#include <stdlib.h>
#include <stdio.h>

typedef struct Lista Lista;

struct Lista
{
	int val;
	Lista *prox;
};

void imprime(Lista *ini, Lista *fim)
{
	Lista *atual;
	int cont = 0;
	atual = ini;
	while(atual != NULL)
	{
		printf("Valor no indice %d: %d\n", ++cont, atual->val); 
		atual = atual->prox;
	}

	printf("\n");
}

void insereInicio(int valor, Lista *ini, Lista *fim)
{

	Lista *novo = (Lista *) malloc (sizeof(Lista*));
	novo->val = valor;
	novo->prox = ini;
	ini = novo;
	printf("%s\n", ini);
	if(fim == NULL)
	{
		fim = novo;
		fim->prox = NULL;
	}
}

void liberaMem(Lista *ini, Lista *fim)
{
	while(ini != fim)
	{
		free(ini);

	}
}

int main()
{
	Lista *ini, *fim;
	ini = NULL;
	fim = NULL;

	insereInicio(4, ini, fim);
	insereInicio(19, ini, fim);

	if(ini == NULL)
		printf("sss\n");
	imprime(ini, fim);

	return 0;
}