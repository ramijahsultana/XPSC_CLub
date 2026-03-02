#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
ll GCD(ll a, ll b)
{
    return __gcd(a, b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll mx = 0;
    
        for(ll i =1; i<=n; i++)
        {
            for(ll j=i+1; j<=n; j++)
            {
                mx = max(mx, GCD(i, j));
            }
        }
        cout << mx << "\n";

        //cout << n/2 << "\n";
    }

    return 0;
}