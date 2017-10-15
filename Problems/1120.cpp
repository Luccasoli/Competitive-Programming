#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);

	char c, comp, espaco;
	bool zero, imprimiu, imprimiuZ;

	while(1)
	{
		zero = false;
		cin.get(c);
		cin.get(espaco);
		if(c == '0')
			if(cin.get(comp) and (comp == '0'))
				break;
		cin.get(comp);

		imprimiuZ = imprimiu = false;
		do{

			if(c == comp)
				continue;
			if(comp == '0')
			{
				if(imprimiu)
                {
                    cout << comp;
                }

				continue;
			}

			cout << comp;
			imprimiu = 1;

		}while(cin.get(comp) and comp != '\n');
		if(!imprimiu)
			cout << "0\n";
		else
			cout << '\n';

	}
	return 0;
}
