#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
typedef unsigned long long llu;
typedef long long ll;
/*
A primeira linha de entrada é um inteiro T (T < 100) que indica o número total de casos de teste. Cada caso inicia com uma linha contendo um inteiro N (N < X2, onde X é a largura em nodos do labirinto, que pode variar de 3 até 7). Este N é o ponto (nodo) no qual o desenho deve ser iniciado e também é onde o desenho deve ser terminado. Na próxima linha há duas informações V e A que são respectivamente a quantidade de vértices e arestas do desenho. Uma quantidade A de linhas vem a seguir, cada uma descrevendo um segmento de linha que Pedro tem disponível para para desenhar o labirinto desejado.
*/
int cont;

void dfs(int x, vector<int> *g, int *cor)
{
	cor[x]=1;
	for(int w : g[x])
	{
		if(!cor[w]){
			dfs(w, g, cor);
			cont += 2;
		}
	}
}

int main()
{
	int t, n, v, a, x, y;
	cin >> t;
	
	while(t--)
	{
		cin >> n >> v >> a;
		vector<int> g[v+1];
		int cor[v+1];
		memset(cor, 0, sizeof cor);
		memset(g, 0, sizeof g);
		while(a--)
		{
			cin >> x >> y;
			g[x].push_back(y);
			g[y].push_back(x);

		}
		
		dfs(n, g, cor);
		cout << cont << '\n';
		cont = 0;
		
	}
	
	return 0;
}
