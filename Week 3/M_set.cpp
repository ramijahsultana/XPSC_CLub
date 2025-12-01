#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        multiset<ll> m;
        for(int i=0; i<n; i++)
        {
            ll x;
            cin >> x;
            m.insert(x);
        }

        int sets = 0;
        while(!m.empty())
        {
            sets++;
            ll curr = *m.begin();
            m.erase(m.begin());

            while(true)
            {
                auto it = m.find(curr +1);
                if(it != m.end())
                {
                    curr = curr + 1;
                    m.erase(it);
                }
                else
                {
                    break;
                }
            }
        }

        cout << sets << "\n";
    }

    return 0;
}