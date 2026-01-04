#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll sum = 0, ans = 0;
    int l = 0;
    for(int r=0; r<n; r++)
    {
        sum += a[r];
        while(sum > x)
        {
            sum -= a[l];
            l++;
        }

        if(sum == x)
        {
            ans++;
        }

    }
    cout << ans << "\n";


    return 0;
}