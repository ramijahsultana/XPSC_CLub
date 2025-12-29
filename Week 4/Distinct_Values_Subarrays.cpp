#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<int, int> last;

    ll ans = 0;
    
    for(int j=1, i=1; j<=n; j++)
    {
        int x;
        cin >> x;

        i = max(i, last[x]+1);
        last[x] = j;
        ans += (j-i+1);
    }

    cout << ans << "\n";

    return 0;
}