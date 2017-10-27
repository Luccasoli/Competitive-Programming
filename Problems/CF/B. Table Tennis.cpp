#include <bits/stdc++.h>
using namespace std;
typedef pair< int , int > pii;

int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

	long long cont = 0, n, seq, atual, aux, vit = 0;
	cin >> n >> seq;
	queue<long long> q;

	for(long long i = 0; i < n; i++	)
	{
		cin >> aux;
		q.push(aux);
	}

	atual = q.front();
	q.pop();
	while(cont < seq)
	{
		if(atual > q.front())
		{
			cont++;
			q.push(q.front());
			q.pop();
		}
		else
		{
			cont = 1;
			q.push(atual);
			atual = q.front();
			q.pop();
		}
		if(cont > n)
			break;

	}
	cout << atual << '\n';

	return 0;
}
