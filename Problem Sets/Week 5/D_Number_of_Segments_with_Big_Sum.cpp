#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll k;
    cin >> n >> k;
    vector<ll> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];    

    ll sum = 0, ans = 0;
    int l=0, r=0;
    while(r<n)
    {
        sum += a[r];
        while(sum >= k)
        {
            ans += (n - r);
            sum -= a[l];
            l++;
        }
        r++;
    }    

    cout << ans << "\n";

    return 0;
}