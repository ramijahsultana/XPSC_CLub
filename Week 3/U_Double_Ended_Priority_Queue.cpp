#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n >> t;
    multiset<ll> s;
    for(int i =0; i<n; i++)
    {
        ll x;
        cin >> x;
        s.insert(x);
    }
    while(t--)
    {
        int cmd;
        cin >> cmd;
        if(cmd == 0)
        {
            ll y;
            cin >> y;
            s.insert(y);
        }
        if(cmd == 1)
        {
            cout << *s.begin() << "\n";
            s.erase(s.begin());
        }
        if(cmd == 2)
        {
            auto it = s.end();
            it--;
            cout << *it << "\n";
            s.erase(it);
        }
    }

    return 0;
}