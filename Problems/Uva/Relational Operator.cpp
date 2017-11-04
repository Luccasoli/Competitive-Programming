#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(0);

    long long t, x, y;
    cin >> t;

    while (t--)
    {
        cin >> x >> y;

        if(x > y)
            cout << '>';
        else if(x < y)
            cout << '<';
        else
            cout << '=';
        cout << '\n';
    }
    return 0;
}
