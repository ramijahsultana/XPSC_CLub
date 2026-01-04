#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<priority_queue<ll>> pq(n);

    while (q--)
    {
        int cmd;
        cin >> cmd;
        if (cmd == 0)
        {
            int t;
            ll x;
            cin >> t >> x;
            pq[t].push(x);
        }
        else if (cmd == 1)
        {
            int t;
            cin >> t;
            if (!pq[t].empty())
            {
                cout << pq[t].top() << "\n";
            }
        }
        else if (cmd == 2)
        {
            int t;
            cin >> t;
            if (!pq[t].empty())
            {
                pq[t].pop();
            }
        }
    }

    return 0;
}