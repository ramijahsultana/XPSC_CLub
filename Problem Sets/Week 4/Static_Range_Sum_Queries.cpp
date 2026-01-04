#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    ll a[n+2];
    ll pref_sum[n+2];
    pref_sum[0] = 0;

    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
        pref_sum[i] = pref_sum[i-1] + a[i];
    }
    
    while(q--)
    {
        int l,r;
        cin >> l >> r;
        cout << pref_sum[r] - pref_sum[l-1] << "\n";

    }

    

    return 0;
}