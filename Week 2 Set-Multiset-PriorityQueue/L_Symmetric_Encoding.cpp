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
        string s;
        cin >> s;
        string r = s;
        set<char> dis(r.begin(), r.end());
        string ch(dis.begin(), dis.end());

        map<char, char> mp;
        for (int i = 0; i < ch.size(); i++)
        {
            mp[ch[i]] = ch[ch.size() - 1 - i];
        }
        string real = s;
        for (auto &c : real)
        {
            c = mp[c];
        }
        cout << real << "\n";
    }
    return 0;
}
