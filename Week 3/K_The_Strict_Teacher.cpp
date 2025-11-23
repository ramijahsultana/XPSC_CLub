#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n, m, q;
        cin >> n >> m >> q;
        int mn = INT_MAX;
        vector<int> v(m);
        vector<int> d(m);
        for(int i=0; i<m; i++)
        {
            cin >> v[i];
            cin >> d[i];
        }
        for(int i=0; i<q; i++)
        {
    
            int diff;
            if(v[i] == d[i])
            {
                cout << "0\n";
            }
            else
            {
                diff = abs(v[i] - d[i]);
                mn = min(mn, diff);
                cout << mn << "\n";
            }
        }
    }

    return 0;
}