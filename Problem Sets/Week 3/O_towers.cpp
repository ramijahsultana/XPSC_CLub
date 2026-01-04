#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];

    multiset<ll> towers;
    
    for(int x : a)
    {   
        auto it = towers.upper_bound(x);
        if(it == towers.end())
        {
            towers.insert(x);
        }
        else
        {
            towers.erase(it);
            towers.insert(x);
        }
    }

    cout << towers.size() << "\n";

    return 0;
}