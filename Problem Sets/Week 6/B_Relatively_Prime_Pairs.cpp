#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll l, r;
    cin >> l >> r;
    ll x = (r-l+1)/2;
    if(x==0)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
        for(ll i=l; i<=r-1; i+=2)
        {
            cout << i << " " << i+1 << "\n";
        }
    }

        
    return 0;
}