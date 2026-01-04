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
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        vector<int> v(m);
        for (int i = 0; i < m; i++)
        {
            cin >> v[i];
            v[i]--;
        }
        sort(v.begin(), v.end());
        vector<int> pos;
        pos.push_back(v[0]);
        for (int i = 1; i < m; i++)
        {
            if (v[i] != v[i - 1])
                pos.push_back(v[i]);
        }
        string c;
        cin >> c;
        sort(c.begin(), c.end());
        int k = pos.size(); 
        for (int i = 0; i < k; i++)
        {
            s[pos[i]] = c[i];
        }
        cout << s << "\n";
    }

    return 0;
}