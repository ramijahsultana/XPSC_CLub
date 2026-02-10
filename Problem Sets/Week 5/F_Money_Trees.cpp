#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        ll k;
        cin >> n >> k;

        vector<ll> a(n), h(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> h[i];

        ll sum = 0;
        int l = 0;
        int ans = 0;

        for (int r = 0; r < n; r++)
        {

            if (r > 0 && h[r - 1] % h[r] != 0)
            {
                l = r;
                sum = 0;
            }

            sum += a[r];

            while (l <= r && sum > k)
            {
                sum -= a[l];
                l++;
            }

            ans = max(ans, r - l + 1);
        }

        cout << ans << "\n";
    }
    return 0;
}