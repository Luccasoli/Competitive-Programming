#include <bits/stdc++.h>
using namespace std;
int soma;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k, x, aux;

	cin >> n >> k >> x;

	for(int i = 0; i < n; i++)
	{	
		cin >> aux;
		if(i < n-k)
			soma += aux;
	}
	soma += (x*k);
	cout << soma << '\n';
	return 0;
}