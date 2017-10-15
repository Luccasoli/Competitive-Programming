#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
typedef unsigned long long llu;
typedef long long ll;

int binSearchR(int ini, int fim, int v[], int x)
{
	int meio = (ini+fim)/2;
	if(ini == fim)
		return -1;
	else
	{
		if(v[meio] == x)
			return meio;
		if(v[meio] < x)
			return binSearchR(meio+1, fim, v, x);
		else
			return binSearchR(ini, meio-1, v, x);
	}
}

int binSearch(int n, int v[], int x)
{
	int ini = 0, fim = n-1, meio;
	
	while(ini != fim)
	{
		meio = (fim+ini)/2;
		if(x < v[meio])
		{
			fim = meio-1;
		}
		else 
			if(v[meio] < x)
			{
				ini = meio+1;
			}
			else
				return meio;
	}
	return -1;
}

int main()
{
	ios::sync_with_stdio(0);
	//cin.tie(0);
	
	int n, aux, *v, pos;
	
	cout << "Digite o valor do tamanho do vetor: ";
	cin >> n;
	
	v = new int(n);
	
	for (unsigned int i = 0; i < n; i += 1)
	{
		cout << "Digite o valor de indice " << i << ": ";
		cin >> v[i];
	}
	
	sort(v, v+n);
	
	cout << "Digite o valor que deseja buscar no array: ";
	cin >> aux;
	
	pos = binSearchR(0, n-1, v, aux);
	
	if(pos == -1)
		cout << "O valor procurado nao esta no vetor!\n";
	else
		cout << "O valor " << aux << " esta na posicao " << pos << '\n';
	
	return 0;
}
