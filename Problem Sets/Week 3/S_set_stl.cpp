#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    set<ll> s;
    while(t--)
    {
        int cmd;
        cin >> cmd;
        if(cmd == 1)
        {
            ll x;
            cin >> x;
            s.insert(x);
        }
        else if(cmd == 2)
        {
            ll x;
            cin >> x;
            if (s.find(x) != s.end()) 
            {
                s.erase(x);
            }
        }
        else if(cmd == 3)
        {
            ll x;
            cin >> x;
            if (s.find(x) != s.end()) 
            {
                cout << "Yes\n";
            }
            else
                cout << "No\n";
        }
    }

    return 0;
}