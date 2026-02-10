#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll k;
    cin >> n >> k;

    set<ll> s;
    for (int i = 1; i <= n; i++)
        s.insert(i);

    auto it = s.begin();

    while (!s.empty())
    {
        int sz = s.size();
        long long moves = k % sz;
        if (moves == 0)
            moves = sz;

        while (moves--)
        {
            it++;
            if (it == s.end())
                it = s.begin();
        }

        cout << *it << " ";

        it = s.erase(it);
        if (it == s.end())
            it = s.begin();
    }

    return 0;
}