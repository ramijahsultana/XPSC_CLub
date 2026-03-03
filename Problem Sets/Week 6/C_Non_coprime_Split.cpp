#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int a, b, t;
void solve()
{
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        for (int j = 2; j <= i / j; j++)
        {
            if (i % j == 0)
            {
                cout << j << " " << i - j << endl;
                return;
            }
        }
    }
    cout << "-1" << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}