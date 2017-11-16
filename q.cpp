#include <bits/stdc++.h>
using namespace std;
typedef pair< int , int > pii;
#define PB push_back
typedef unsigned long long ull;
#define m 1000000007

long long med(vector<ull> v)
{
	int t = v.size()-1;
	sort(v.begin(), v.end());
	if(v.size()%2)
	{
		return v[t/2];
	}
	else
	{
		return (v[t/2]+v[t/2+1])/2;
	}
}
long long mediana;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    ull n, aux;
    cin >> n;
    vector<ull> v;

    for(int i = 0; i < n; i++)
    {
    	cin >> aux;
    	v.push_back(aux);
    	mediana += med(v);
    }

    cout << (mediana)%m<< '\n';
    
    return 0;
}