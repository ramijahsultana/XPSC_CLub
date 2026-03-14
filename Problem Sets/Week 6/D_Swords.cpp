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
    vector<ll> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];

    ll x = *max_element(a.begin(), a.end());
    ll z = 0;
    for(int i=0; i<n; i++)
    {
        z = __gcd(z, x - a[i]);
    }

    ll y = 0;
    for(int i=0; i<n; i++)
    {
        y += (x - a[i])/z; 
    }


    cout << y << " " << z << "\n";

    

    return 0;
}