#include <bits/stdc++.h>
using namespace std;
typedef pair< int , int > pii;
bool t = 0;
int main()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	
	int n;
	cin >> n;
	char v1[n];
	char v2[n];
	int cont1 = 0;
	int cont2 = 0;
	int vant = 0;

	for(int i = 0; i < n; i++)
	{
		cin >> v1[i];
	}

	for(int i = 0; i < n; i++)
	{
		cin >> v2[i];
	}

	for(int i = 0; i < 2*n; i++)
	{
		if(i%2 == 0)
		{
			if(v1[i/2] == 'x')
				cont1++;
		}
		else
		{
			if(v2[i/2] == 'x')
				cont2++;
		}
		
		if(abs(cont1-cont2) > n-((i/2))){
			cout << i+1 << '\n';
			t = 1;
			break;
		}

	}

	if(!t)
	cout << "Empate\n";
	
	return 0;
}