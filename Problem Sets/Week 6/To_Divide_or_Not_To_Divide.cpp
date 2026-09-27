#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        ll a,b,n;
        cin >> a >> b >> n;
       if(a % b == 0)
        {
            cout << -1 << '\n';
            continue;
        }

        ll ans = ((n + a - 1) / a) * a;

        while(ans % b == 0)
        {
            ans += a;
        }

        cout << ans << '\n';
       
            
    }

    return 0;
}