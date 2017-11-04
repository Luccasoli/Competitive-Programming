#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(0);

    int n, indmaior, indmenor, cont;
    cin >> n;
    int v[n];
    int maior = -1, menor = INT_MAX;
    for (size_t i = 0; i < n; i++) {
        cin >> v[i];
        if(v[i] > maior)
        {
            maior = v[i];
            indmaior = i;
        }
        if(v[i] <= menor)
        {
            menor = v[i];
            indmenor = i;
        }
    }

    cont = indmaior + ((n-1) - indmenor);
    if(indmaior > indmenor)
        cont--;

    cout << cont << '\n';

    return 0;
}
