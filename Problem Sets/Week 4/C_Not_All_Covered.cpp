#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> diff(n+2);
    
    for(int i=0; i<m; i++)
    {
        int l, r;
        cin >> l >> r;

        diff[l] += 1;
        diff[r+1] -= 1;
    }

    int curr = 0;
    int ans = INT_MAX;

    for(int i=1; i<=n; i++)
    {
        curr += diff[i];
        ans = min(ans, curr);
    }

    cout << ans << "\n";

    return 0;
}