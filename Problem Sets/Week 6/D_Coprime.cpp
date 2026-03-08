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
        int n;
        cin >> n;
        vector<int> a(1001, -1);
        for(int i=1; i<=n; i++)
        {
            int x;
            cin >> x;
            a[x] = i;
        }
        int ans = -1;
        for(int i=1; i<=1000; i++)
        {
            for(int j=i; j<=1000; j++)
            {
                if(a[i] != -1 && a[j] != -1)
                {
                    if(__gcd(i, j) == 1)
                    {
                        ans = max(ans, a[i]+a[j]);
                    }
                }
            }
        }
        cout << ans << "\n";
    }

    return 0;
}