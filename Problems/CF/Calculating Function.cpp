#include <bits/stdc++.h>
using namespace std;

vector<unsigned long long> converte(unsigned long long n)
{
    vector<unsigned long long> v;

    while(n > 31)
    {
        v.push_back(n%32);
        n /= 32;
    }

    v.push_back(n);

    return v;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(0);

    unsigned long long n;
    cin >> n;
    if(n&1)
        cout << (long long)-(n/2+1);
    else
        cout << n/2;
    cout << '\n';

    return 0;
}
