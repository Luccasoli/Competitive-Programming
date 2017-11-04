#include <bits/stdc++.h>
using namespace std;

int menor()
{

}

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(0);

    int n, aux, cont = 0, resp = 0;
    while(cin >> n and n)
    {
        resp = 0;
        cont = 0;
        queue< pair<int, int> > v[n];

        int cor[n];
        memset(cor, 0, sizeof cor);

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin >> aux;
                v[i].push(make_pair(aux, i));
            }

        }
        while(cont++ < n)
        {
            priority_queue< pair<int, int>, vector< pair<int, int> >, greater< pair<int, int> > >pq;
            for(int i = 0; i < n; i++)
            {
                if(!cor[i])
                    pq.push(v[i].front());
                v[i].pop();
            }
            resp += pq.top().first;
            cor[pq.top().second] = 1;
            //cout << resp << "**\n";
        }

        cout << resp << '\n';
    }


	return 0;
}
