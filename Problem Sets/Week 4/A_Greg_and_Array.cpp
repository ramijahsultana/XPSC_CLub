#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    vector<ll> a(n+1);
    for(int i=1;i<=n; i++)
        cin >> a[i];

    vector<int> l(m+1), r(m+1);
    vector<ll> d(m+1);

    for(int i=1; i<=m; i++)
    {
        cin >> l[i] >> r[i] >> d[i];
    }


    vector<ll> opCnt(m+2);
    for(int i=1; i<=k; i++)
    {
        int x, y;
        cin >> x >> y;

        opCnt[x] += 1;
        opCnt[y+1] -= 1;
    }

    for(int i=1; i<=m; i++)
    {
        opCnt[i] += opCnt[i-1];
    }

    vector<ll> diff(n+2);

    for(int i=1; i<=m; i++)
    {
        ll time = opCnt[i];
        if(time == 0) continue;

        diff[l[i]] += d[i]*time;
        diff[r[i]+1] -= d[i]*time;
    }

    for(int i=1; i<=n; i++)
    {
        diff[i] += diff[i-1];
        a[i] += diff[i];
    }

    for(int i=1; i<=n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}