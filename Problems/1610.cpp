#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
typedef unsigned long long llu;
typedef long long ll;
#define pb push_back

vector<int> g[10001];
bool cor[10001];

int dfs(int x);

int verLoop(int n)
{
	int resp;
	for(int i = 1; i<=n; i++)
	{
		resp = 0;
		if(resp = dfs(i)){
			//cout << i << '\n';
			return resp;
		}

		memset(cor, 0, sizeof cor);
	}
	return resp;
}

int dfs(int x)
{
	cor[x] = 1;
	for(int w : g[x])
	{
		if(!cor[w])
			dfs(w);
		else
		{
			cout << w << '\n';
			return 1;
		}
	}

}

int main()
{
	ios::sync_with_stdio(false);
	//cin.tie(NULL);
	
	int t, n, m, a, b;
	cin >> t;
	while(t--)
	{
		cin >> n >> m;
		for(int i = 0; i < m; i++)
		{
			cin >> a >> b;
			g[a].pb(b);
		}
		
		if(verLoop(n))
			cout << "SIM\n";
		else
			cout << "NAO\n";
		memset(cor, 0, sizeof cor);
		memset(g, 0, sizeof g);
	}
	
	return 0;
}
