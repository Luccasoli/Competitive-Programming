#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
typedef unsigned long long llu;
typedef long long ll;
#define pb push_back

int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	
	char c;
	bool mai = false;;
	while(cin.get(c))
	{
		if(c == ' ')
		{
			cout << ' ';
			continue;
		}
		if(c == '\n')
		{	
			cout << '\n';
			mai = false;
			continue;
		}
		if(!mai)
		{
			cout << (char)toupper(c);
		}
		else
			cout << (char)tolower(c);
		mai = !mai;
		
	}
	
	
	return 0;
}
