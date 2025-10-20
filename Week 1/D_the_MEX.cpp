#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> vis(101, 0);
    int cnt = 0;
    for(int val : v)
    {
        vis[val] = 1;
    }

    for(int i=0; i<x; i++)
    {
        if(vis[i] == 0)
            cnt++;
        
    }

    if(vis[x] == 1)
        cnt++;
    
    cout << cnt << '\n';    
    
    return 0;
}