#include <bits/stdc++.h>
using namespace std;

typedef struct Lista Lista;

struct Lista
{
	int val;
	Lista *prox;
};

void criaLista(Lista *ini)
{
	ini = new Lista();
	if(ini == NULL)
	{
		cout << "Memoria indisponível\n\n";
		exit(0);
	}
	ini->prox = NULL;
}

void insereInicio(int val, Lista *cabeca)
{
	Lista *novo;
	criaLista(novo);

	cabeca->prox = novo;

	novo->val = val;

	cabeca = novo;
}

void imprime(Lista *ini)
{
	int cont = 0;
	Lista *p = ini;

	while(p != NULL)
	{
		cout << "O valor de indice " << ++cont << " eh: " << p->val << '\n';
		p = p->prox;
	}
	cout << '\n';
}

int main()
{
	Lista *ini, *cabeca;
	criaLista(ini);
	cabeca = ini;
	insereInicio(155, cabeca);
	insereInicio(35, cabeca);

	imprime(ini);

	return 0;
}