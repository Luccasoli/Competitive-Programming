#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
typedef unsigned long long llu;
typedef long long ll;
#define pb push_back

int v[26];

int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	
	
	int n, maior;
	char c;
	cin >> n;
	cin.ignore();
	while(n--)
	{
		maior = -1;
		while(cin.get(c) and c != '\n')
		{
			c = tolower(c);
			if(c >= 'a' and c <= 'z')
			{
				v[c-'a']++;
				maior = max(maior, v[c-'a']);
			}
		}
		for(int i = 0; i < 26; i++)
		{
			if(v[i] == maior)
				cout << (char)('a'+i);
		}
		
		cout << '\n';
		memset(v, 0, sizeof v);
	}
	
	return 0;
}






