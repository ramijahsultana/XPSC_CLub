#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int ans = INT_MAX;

        for (char ch = 'a'; ch <= 'z'; ch++) {
            int l = 0, r = n - 1;
            int cnt = 0;
            bool ok = true;

            while (l < r) {
                if (s[l] == s[r]) {
                    l++;
                    r--;
                } else if (s[l] == ch) {
                    l++;
                    cnt++;
                } else if (s[r] == ch) {
                    r--;
                    cnt++;
                } else {
                    ok = false;
                    break;
                }
            }

            if (ok) {
                ans = min(ans, cnt);
            }
        }

        if (ans == INT_MAX)
            cout << -1 << "\n";
        else
            cout << ans << "\n";
    }

    return 0;
}
