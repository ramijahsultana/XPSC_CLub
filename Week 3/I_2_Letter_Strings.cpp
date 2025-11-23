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
        map<string, long long> mp;
        vector<string> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            string s = a[i];

            for (char c = 'a'; c <= 'k'; c++)
            {
                if (c != s[0])
                {
                    string t = s;
                    t[0] = c;
                    ans += mp[t];
                }
            }

            for (char c = 'a'; c <= 'k'; c++)
            {
                if (c != s[1])
                {
                    string t = s;
                    t[1] = c;
                    ans += mp[t];
                }
            }
            mp[s]--;
        }

       cout << ans << "\n";
    }

    return 0;
}   