#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,q;
    cin >> n >> q;
    vector<int> v(n+1);
    for(int i=1; i<=n; i++)
    {
        cin >> v[i];
    }
    for(int j=0; j<q; j++)
    {
        int l,r,x;
        cin >> l >> r >> x;
        for(int i=l; i<=r; i++)
        {
            v[i] += x;
        }
    }
    for(int i=1; i<=n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}