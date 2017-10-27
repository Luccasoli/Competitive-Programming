#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
typedef unsigned long long llu;
typedef long long ll;
#define pb push_back

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	string s;
	cin >> n;
	cin.ignore();
	
	while(n--)
	{
		getline(cin, s);
		reverse(s.begin(), s.begin()+(s.size()/2));
		reverse(s.begin()+(s.size()/2), s.end());
		cout << s << '\n';
	}
	
	return 0;
}
