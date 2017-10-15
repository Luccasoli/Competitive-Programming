#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;
typedef unsigned long long llu;
typedef long long ll;
#define pb push_back

bool cor[10001];
vector<int> g[10001];
int dist[10001];
int nivel;
vector<int> niv[10001];
int cont[10001];

void bfs(int x)
{
	queue<int> q;
	cor[x] = 1;
	q.push(x);
	while(!q.empty())
	{
		int y = q.front();
		q.pop();
		
		for(int w : g[y])
		{
			if(!cor[w])
			{
				q.push(w);
				cor[w] = 1;
				dist[w] = dist[y]+1;
				nivel = max(nivel, dist[w]);
				niv[dist[w]].push_back(w);
			}
		}
	}
	
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int M, N, x;
	cin >> N >> M;
	int v[M+1];
	for(int i = 1; i <= N; i++)
	{
		cin >> x;
		g[x].push_back(i);
	}
	
	bfs(0);
	

	
	for(int i = 0; i < M; i++)
	{
		cin >> v[i];
		for(int j = 1; j<= nivel; j++)
		{
			if(find(niv[j].begin(), niv[j].end(), v[i]) != niv[j].end())
			{
				cont[j]++;
				break;
			}
		}
	}
		
	for(int j = 1; j <= nivel; j++)
	{
		cout<< fixed << setprecision(2) <<((double)cont[j]/niv[j].size())*100 << ' ';
	}
	
	cout << '\n';
	
	return 0;
}
