#include <bits/stdc++.h>
using namespace std;

char decode(char c, int cifra)
{
    char aux;
    aux = (c - 'A');
    aux++;
    cifra %= 26;

    if(cifra < aux)
    {
        return (char)(c-cifra);
    }

    cifra -= aux;
    return (char)('Z'-cifra);
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(0);

    int qnt, cifra;
    string s;

    cin >> qnt;

    while(qnt--)
    {
        cin >> s;
        cin >> cifra;

        for(int i = 0; i < s.size(); i++)
        {
            s[i] = decode(s[i], cifra);
        }
        cout << s << '\n';
    }

    return 0;
}
