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
        string s;
        cin >> s;
        vector<pair<int, char>> upper;
        vector<pair<int, char>> lower;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'b')
            {
                if (!lower.empty())
                {
                    lower.pop_back();
                }
            }
            else if (s[i] == 'B')
            {
                if (!upper.empty())
                    upper.pop_back();
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
                upper.push_back({i, s[i]});
            else if (s[i] >= 'a' && s[i] <= 'z')
                lower.push_back({i, s[i]});
        }

        vector<pair<int, char>> ans;
        ans.insert(ans.end(), upper.begin(), upper.end());
        ans.insert(ans.end(), lower.begin(), lower.end());

        sort(ans.begin(), ans.end());

        for (auto x : ans)
            cout << x.second;

        cout << "\n";
    }

    return 0;
}
