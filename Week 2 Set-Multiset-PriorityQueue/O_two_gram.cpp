#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin >> n >> s;

    map<string, int> freq;

    for (int i = 0; i < n - 1; i++)
    {
        string two_gram = s.substr(i, 2);
        freq[two_gram]++;
    }

    string ans;
    int mx = 0;
    for (auto [key, val] : freq)
    {
        if (val > mx)
        {
            mx = val;
            ans = key;
        }
    }
    cout << ans << "\n";
    return 0;
}