#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> h(n);
        for (int i = 0; i < n; i++) cin >> h[i];

        int ones = 0, others = 0;
        for (int x : h) {
            if (x == 1) ones++;
            else others++;
        }

        int ans = others + (ones + 1) / 2; 
        cout << ans << '\n';
    }

    return 0;
}
