#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;
    vector<ll> divisors;
    for(ll i=1; i*i <= n; i++)
    {
        if(n%i==0)
        {
            divisors.pb(i);
            if(i != n/i)
                divisors.pb(n/i);
        }
    }

    sort(divisors.begin(), divisors.end());
    if(k > divisors.size())
        cout << -1 << endl;
    else
        cout << divisors[k-1] << endl;


    return 0;
}