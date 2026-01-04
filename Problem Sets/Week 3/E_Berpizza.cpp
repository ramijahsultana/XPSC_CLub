#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, cumstomerNo = 1;
    cin >> t;
    set<pair<int, int>> s;
    multiset<pair<int, int>> m;
    vector<int> ans;
    for (int i = 1; i <= t; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int money;
            cin >> money;
            s.insert({cumstomerNo, money});
            m.insert({money, -cumstomerNo});
            cumstomerNo++;
        }
        else if(type == 2)
        {
            int pos = s.begin()->first, money = s.begin()->second;
            ans.push_back(pos);
            s.erase(s.begin());
            m.erase({money, -pos});

        }
        else
        {
            int pos = -m.rbegin()->second, money = m.rbegin()->first;
            ans.push_back(pos);
            m.erase(--m.end());
            s.erase({pos, money});
        }
    }
    for (auto x : ans)
        cout << x << " ";

    cout << "\n";

    return 0;
}