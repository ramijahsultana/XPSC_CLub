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
        int n;
        cin >> n;

        vector<int> freq(n + 1, 0);

        for (int i = 0; i < n; i++)
        {
            int w;
            cin >> w;
            freq[w]++;
        }

        int ans = 0;

       
        for (int s = 2; s <= 2 * n; s++)
        {
            int pairs = 0;

            for (int x = 1; x <= n; x++)
            {
                int y = s - x;

                if (y < 1 || y > n)
                    continue;

                if (x < y)
                {
                    pairs += min(freq[x], freq[y]);
                }
                else if (x == y)
                {
                    pairs += freq[x] / 2;
                }
            }

            ans = max(ans, pairs);
        }

        cout << ans << "\n";
    }

    return 0;
}