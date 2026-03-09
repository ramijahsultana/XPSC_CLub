#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll m = *min_element(a.begin(), a.end());
        ll cnt = 0;
        for (auto x : a)
            if (x == m)
                cnt++;

        ll g = 0;
        for (auto x : a)
        {
            if (x % m == 0 && x != m)
                g = __gcd(g, x / m);
        }

        if (cnt > 1 || g == 1)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
    return 0;
}