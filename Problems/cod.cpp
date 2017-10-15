#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
typedef unsigned long long llu;
typedef long long ll;
#define pb push_back

int filas(priority_queue<int> q1, priority_queue<int> q2)
{
	while(!q2.empty())
	{
		if(q1.top() == q2.top())
		{
			q1.pop();
			q2.pop();
		}
		else
		{
			return q1.top();
		}
	}
	return q1.top();
}

void imprime(queue<int> q)
{
	while(!q.empty())
	{
		cout << q.front() << ' ';
		q.pop();
	}
}

int main()
{
	ios::sync_with_stdio(false);
	//cin.tie(NULL);
	
	int n, aux;
	cin >> n;
	priority_queue<int> q1;
	priority_queue<int> q2;
	priority_queue<int> qaux;
	for(int i = 0; i < n; i++)
	{
		cin >> aux;
		q1.push(aux);

	}
	
	for(int i = 0; i < n-1; i++)
	{
		cin >> aux;
		q2.push(aux);
	}
	//sort(q1.front(), q1.back());
	//sort(q2.front(), q2.back());
	cout << filas(q1, q2) << '\n';

	for(int i = 0; i < n-2; i++)
	{
		cin >> aux;
		qaux.push(aux);
	}
	cout << filas(q2, qaux) << '\n';

	return 0;
}
