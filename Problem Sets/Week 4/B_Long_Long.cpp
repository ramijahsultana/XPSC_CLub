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
        cin >> n;
        ll sum = 0;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += abs(a[i]);
        }

        int idx = 0, move = 0;
        while (idx < n)
        {
            if (a[idx] < 0)
            {
                while (idx < n && a[idx] <= 0)
                {
                    idx++;
                }
                move++;
            }
            else
            {
                idx++;
            }
        }
        cout << sum << " " << move << "\n";
    }

    return 0;
}