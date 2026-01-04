#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ex_sum;
    cin >> n >> ex_sum;

    map<ll, ll> sum_freq;
    sum_freq[0] = 1;
    ll sum =0;
    ll ans = 0;
    for(int i=1; i<=n; i++)
    {
        int x;
        cin >> x;
         
        sum += x;
        ans += sum_freq[sum - ex_sum];
        sum_freq[sum]++;
    }
    
    cout << ans << "\n";

    return 0;
}