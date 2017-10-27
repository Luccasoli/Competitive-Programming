#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define MAX 10e8
typedef pair<int, int> pii;
typedef unsigned long long llu;
typedef long long ll;
typedef vector<int> vi;

vi g[501];
bool cor[501];
int idades[501];
int pessoas[501];
int menor = MAX;
int tg(int x, int N)
{
	for(int i = 1; i <= N; i++)
	{
		if(pessoas[i] == x)
			return i;
	}
	return 0;
}

void dfs(int x)
{
	cor[x] = 1;
	for(int w : g[x])
		if(!cor[w])
		{
			menor = min(menor, idades[pessoas[w]]);
			dfs(w);
		}
}	

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N, M, I, x, y;
	char c;
	while(cin >> N >> M >> I)
	{
		for (unsigned int i = 1; i <= N; i += 1)
		{
			cin >> idades[i];
			pessoas[i] = i;
		}
		
		for (int i = 0; i < M; i++)
		{
			cin >> x >> y;
			g[y].push_back(x);
		}
		while(I--)
		{
			cin >> c;
			if(c == 'T')
			{
				cin >> x >> y;
				
				swap(pessoas[tg(x, N)], pessoas[tg(y, N)]);
			}
			else
			{
				cin >> x;
				dfs(tg(x, N));
				memset(cor, 0, sizeof cor);
				if(menor == MAX)
					cout << "*\n";
				else
					cout << menor << '\n';
				menor = MAX;
			}
		}
		
	}
	
	return 0;
}
