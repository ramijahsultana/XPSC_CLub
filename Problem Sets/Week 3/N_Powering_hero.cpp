#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        priority_queue<ll> pq;
        ll ans = 0;
        for(ll i=1; i<=n; i++)
        {
            ll x;
            cin >> x;
            if(x == 0 && !pq.empty())
            {
                ans += pq.top();
                pq.pop();
            }
            else 
                pq.push(x);
        }
        cout << ans << "\n";

    }

    return 0;
}