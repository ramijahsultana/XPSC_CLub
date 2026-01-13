#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        ll sum = 0, cnt = 0;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;
            if(sum <= k)
            {
                cnt++;
            }
        }
        cout << cnt << "\n";
    }

    return 0;
}