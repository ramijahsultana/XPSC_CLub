#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin >> n >> m;
    multiset<ll> t;
    for(int i=0; i<n; i++)
    {
        ll x;
        cin >> x;
        t.insert(x);
    }

    while(m--)
    {
        ll y;
        cin >> y;
        auto it = t.upper_bound(y);
        if(it == t.begin())
        {
            cout << "-1\n";
        }
        else
        {
            it--;
            cout << *it << "\n";
            t.erase(it);
        }
    }

    return 0;
}