#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, x;
    cin >> n >> x;
    vector<pair<ll, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        int l = i + 1, r = n - 1;

        while (l < r)
        {
            ll sum = a[i].first + a[l].first + a[r].first;
            if (sum == x)
            {
                vector<int> ans = {a[i].second, a[l].second, a[r].second};
                sort(ans.begin(), ans.end());
                cout << ans[0] << " " << ans[1] << " " << ans[2] << "\n";
                return 0;
            }
            else if (sum < x)
                l++;
            else
                r--;
        }
    }

    cout << "IMPOSSIBLE\n";

    return 0;
}