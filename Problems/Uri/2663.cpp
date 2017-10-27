#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	priority_queue<int> pq;

	int n, aux;
	int qnt;

	cin >> n >> qnt;
	int cont = qnt;
	while(n--)
	{
		cin >> aux;
		pq.push(aux);
	}

	while(qnt-- > 1)
	{
		pq.pop();
	}

	int comp = pq.top();
	pq.pop();
	while(pq.top() == comp and !pq.empty())
	{
		cont++;
		pq.pop();
	}

	cout << cont << '\n';

	return 0;
}
