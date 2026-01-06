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
    vector<ll> a(n+1);
    for(int i=1; i<=n; i++)
        cin >> a[i];

    ll sum = 0, ans = 0;
    int l=0, r=0;
    while()
    {
        sum += a[r];
        if(sum <= k)
        {
            ans += (r-l+1);
        }
        else
        {
            while(sum <= k)
            {
                sum -= a[l];
                l++;
            }
        }
        r++;
    }    

    return 0;
}