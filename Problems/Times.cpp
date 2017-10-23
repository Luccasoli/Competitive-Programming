#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, qnt, num;
	cin >> n >> qnt;
	vector<string> v[qnt];
	priority_queue< pair<int, string> > pq;
	string aux;
	qnt--;

	for(int i = 0; i < n; i++)
	{
		cin >> aux >> num;
		pq.push({num, aux});
	}

	for(int i = 0, j = 0; j < n; j++, i++)
	{
		v[i].push_back(pq.top().second);
		pq.pop();
		if(i == qnt)
			i = -1;
	}

	for (int i = 0; i <= qnt; ++i)
	{
		cout << "Time " << i+1 << "\n";
		sort(v[i].begin(), v[i].end());
		for (string s : v[i])
		{
			cout << s << '\n';
		}

		cout << '\n';
	}

	return 0;
}
