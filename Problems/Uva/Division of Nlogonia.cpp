#include <bits/stdc++.h>
using namespace std;

string quadrante(int basex, int basey, int x, int y)
{
    if(x == basex or y == basey)
        return "divisa";
    if(x > basex and y > basey)
        return "NE";
    if(x < basex and y > basey)
        return "NO";
    if(x > basex and y < basey)
        return "SE";
    return "SO";
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(0);

    int test, basex, basey, x, y;

    while(cin >> test and test)
    {
        cin >> basex >> basey;

        while(test--)
        {
            cin >> x >> y;

            cout << quadrante(basex, basey, x, y) << '\n';
        }
    }

    return 0;
}
