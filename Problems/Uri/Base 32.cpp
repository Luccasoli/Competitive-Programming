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
    while(cin >> n and n)
    {

        vector<unsigned long long> v = converte(n);
        for (long long i = v.size()-1; i >= 0; i--) {
            if(v[i]<=9)
                cout << v[i];
            else
                cout << (char)(('A'-10)+v[i]);
        }
        cout << '\n';
    }
    cout << "0\n";

    return 0;
}
