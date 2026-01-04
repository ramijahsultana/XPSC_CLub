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
        int n, q;
        cin >> n >> q;

        vector<ll> a(n + 1);
        vector<int> pref(n + 1, 0);
        ll total_sum = 0;

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            total_sum += a[i];
            pref[i] = pref[i - 1] + (a[i] % 2);
        }

        int total = total_sum % 2;

        while (q--)
        {
            int l, r, k;
            cin >> l >> r >> k;

            int len = r - l + 1;
            int odd = pref[r] - pref[l - 1];

            int old = odd % 2;
            int nw = (k % 2) * (len % 2);

            int final = (total - old + nw + 2) % 2;

            cout << (final ? "YES\n" : "NO\n");
        }
    }

    return 0;
}