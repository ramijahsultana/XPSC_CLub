#include <bits/stdc++.h>
using namespace std;
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
        vector<int> a(n);
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }

        int l = 0;
        int r = n - 1;
        bool flag = false;
        while (l < r)
        {

            int mn = *s.begin();
            int mx = *s.rbegin();
            if (a[l] != mn && a[l] != mx && a[r] != mn && a[r] != mx)
            {
                cout << l + 1 << " " << r + 1 << "\n";
                flag = true;
                break;
            }
            else if (a[l] == mn || a[l] == mx)
            {
                s.erase(a[l]);
                l++;
            }
            else if (a[r] == mn || a[r] == mx)
            {
                s.erase(a[r]);
                r--;
            }
        }
        if (!flag)
        {
            cout << -1 << "\n";
        }
    }

    return 0;
}