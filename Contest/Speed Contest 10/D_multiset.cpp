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
        int n, k;
        cin >> n >> k;
        multiset<int> m;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            m.insert(x);
        }
        while (k--)
        {
            auto x = m.begin();
            m.erase(x);
            auto y = m.end();
            y--;
            m.erase(y);
            int sum = *x + *y;
            m.insert(sum);
        }

        for (auto it : m)
        {
            cout << it << " ";
        }
        cout << "\n";
    }
    return 0;
}