#include <bits/stdc++.h>
using namespace std;
typedef pair< int , int > pii;
long long v[100005];
long long soma2, final;
int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	
	long long n, k;
	long long soma = 0;
	string s;

	cin >> n >> k;
	cin >> s;

	for(long long i = 0, j = 0; i < s.size(); i++)
	{
		
		if(s[i] == '1')
		{
			j++;
			continue;
		}
		

		v[j]++;
		soma++;
		soma2 = max(soma2, v[j]);
		if(i == s.size()-1 and v[j] > 0)
			final = j;
	}
	//soma2 -= v[0];
	//soma2 -= v[s.size()-2];
	if(soma == s.size())
	{
		cout << soma*k << '\n';
		return 0;
	}

	if(final)
		cout << max(v[0]+v[final], soma2) << '\n';
	else
		cout << soma2 << '\n';
	
	return 0;
}