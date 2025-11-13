#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n, q;
        cin >> n >> q;
        map<int, set<int>> mp;
        for(int i=1;i<=n; i++)
        {
            int x;
            cin >> x;
            mp[x].insert(i);
        }
        // for(auto [x,y] : mp)
        // {
        //     cout << x << " -> ";
        //     for(auto val : y)
        //     {
        //         cout << val << " ";
        //     }
        //     cout << "\n";
        // }

        for(int i=1; i<=q; i++)
        {
            int l, r;
            cin >> l >> r;
            if(mp.find(l) == mp.end() || mp.find(r) == mp.end())
            {
                cout << "NO\n";
            }
            else
            {
                int Left, Right;
                Left = *mp[l].begin();
                Right = *mp[r].rbegin();
                if(Left < Right)
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
        }

    }

    return 0;
}