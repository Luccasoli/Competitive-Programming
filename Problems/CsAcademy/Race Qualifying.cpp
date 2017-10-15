#include <bits/stdc++.h>
using namespace std;
typedef pair< int, int > pii;
typedef unsigned long long llu;
typedef long long ll;
#define pb push_back
int cont;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	
	int n;
	cin >> n;
	int v[n];

	for(int i = 0; i <n; i++)
		cin >> v[i];

	for(int i = 0; i < n-2; i++)
	{
		for(int j = i+i; j < n-1; j++)
		{
			if(v[i]+v[j] == v[j+1])
				cont++;
		}
	}
	cout << cont << '\n';
	return 0;
}
