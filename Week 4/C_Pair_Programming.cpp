#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int k, n, m;
        cin >> k >> n >> m;

        vector<int> a(n), b(m);
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;

        int i = 0, j = 0;
        int lines = k;
        vector<int> ans;
        bool ok = true;

        while (i < n || j < m) {
            bool canA = (i < n && (a[i] == 0 || a[i] <= lines));
            bool canB = (j < m && (b[j] == 0 || b[j] <= lines));

            if (!canA && !canB) {
                ok = false;
                break;
            }

            
            if (canA && canB) {
                if (a[i] == 0 || (b[j] != 0 && b[j] > a[i])) {
                    ans.push_back(b[j]);
                    if (b[j] == 0) lines++;
                    j++;
                } else {
                    ans.push_back(a[i]);
                    if (a[i] == 0) lines++;
                    i++;
                }
            }
            else if (canA) {
                ans.push_back(a[i]);
                if (a[i] == 0) lines++;
                i++;
            }
            else {
                ans.push_back(b[j]);
                if (b[j] == 0) lines++;
                j++;
            }
        }

        if (!ok) {
            cout << -1 << "\n";
        } else {
            for (int x : ans) cout << x << " ";
            cout << "\n";
        }
    }

    return 0;
}
