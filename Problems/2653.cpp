#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	map<string, int> m;
	string s;

	while(cin >> s)
	{
		m[s] = 1;
	}

	cout << m.size() << '\n';

	return 0;
}
