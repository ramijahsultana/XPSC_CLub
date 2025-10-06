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
    
    sort(v.begin(), v.end());
    int i = 0;
    int cnt = 0;

    for(int val : v)
    {
        if(i == x)
        {
            if(cnt==0)
            {
                cnt = 1;
            }
            break;
        }
        if(val != i)
        {
            cnt++;
        }
        i++;
    }

    cout << cnt << "\n";


    return 0;
}