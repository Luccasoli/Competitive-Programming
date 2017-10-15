#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
typedef unsigned long long llu;
typedef long long ll;

vector<char> letras[26];
int k;
vector<int> g[1000];
int cor[1000];

void dfs(int x)
{
	letras[k].push_back((char)(x+'a'));
	cor[x] = 1;
	for(int w : g[x])
	{
		if(!cor[w])
			dfs(w);
	}

}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, v, e, cont ;
	char x, y;
	cin >> n;
	int ind = 0;
	while(n--)
	{
		cin >> v >> e;
		cont = 0;
		k = 0;
		//vector <int> g[v+1];
		//int cor[v+1];
		memset(cor, 0, sizeof cor);
		memset(g, 0, sizeof g);
		
		while(e--)
		{
			cin >> x >> y;
			g[(int)(x-'a')].push_back((int)(y-'a'));
			g[(int)(y-'a')].push_back((int)(x-'a'));
		}

		for(int i = 0; i < v; i++)
		{
			if(!cor[i])
			{
				dfs(i);
				cont++;
				k++;
			}
		}
		
		cout << "Case #" << ++ind << ":\n";
		for(int i = 0; i<cont; i++)
		{
			sort(letras[i].begin(), letras[i].end());
			for(char c : letras[i])
			{
				cout << c << ',';
			}
			cout << '\n';
		}
		cout << cont << " connected components\n\n";
		
		memset(letras, 0, sizeof letras);
	}
	
	return 0;
}
