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
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(int i=0;i<n; i++)
            cin >> a[i];

        ll sum = 0;    
        for(ll val : a)
            sum += val;

        if(sum%n == 0)
            cout << "YES\n";
        else
            cout << "NO\n";    
       


    }

    return 0;
}