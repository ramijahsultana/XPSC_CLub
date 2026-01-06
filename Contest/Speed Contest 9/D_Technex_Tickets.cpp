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
        int l = 2, r = 5, ans = 2;
        if (n == 1 || n == 3)
        {
            cout << "1\n";
            continue; 
        }
        else
        {
            while (l != n && r != n)
            {
                l = l + 2;
                r = r + 2;
                ans++;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}