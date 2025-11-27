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
        ll n;
        int m, q;
        cin >> n >> m >> q;

        vector<ll> v(m);

        for (int i = 0; i < m; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        while (q--)
        {
            ll a;
            cin >> a;

            auto it = lower_bound(v.begin(), v.end(), a);
            ll l = -1, r = -1;

           
            if (it != v.end())
            {
                r = *it;
            }
            if (it != v.begin())
            {
                it--;
                l = *it;
            }

            ll left = LLONG_MAX;
            ll right = LLONG_MAX;
            
            if(r != -1)
            {
                left = r - 1;
            }
            else
            {
                left = n - 1;
            }
        

            if(l != -1)
            {
                right = n - l;
            }
            else
            {
                right = n;
            }
            ll ans = min(left, right);
            cout << ans << "\n";
        }
    }

    return 0;
}