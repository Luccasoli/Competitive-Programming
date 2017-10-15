#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
typedef unsigned long long llu;
typedef long long ll;
#define pb push_back

bool cor[10000];
char g[10000][10000];
int dist[10000];

/*

	011
	101
	010

*/

void dfs(int x)
{
	cor[x] = 1;
	for(int w : g[x])
	{
		dist[w] = dist[x]+1;
	}
}

void bfs(int x)
{
	queue<int> q;
	cor[x] = 1;
	q.push(x);
	while(!q.empty())
	{
		int top = q.front();
		q.pop();
		for(int w: g[top])
		{
			if(!cor[w] and g[top][w])
			{
				cor[w] = 1;
				q.push(w);
				dist[w] = dist[top] + 1;
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

		
	
	return 0;
}
