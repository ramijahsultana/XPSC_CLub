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
        string s;
        cin >> s;
        int cntw = 0;
        for(int i=0; i<k; i++)
        {
            if(s[i] == 'W')
            {
                cntw++;
            }
        }
        int ans = cntw;

        for(int i=k; i<n; i++)
        {
            if(s[i] == 'W')
            {
                cntw++;
            }
            if(s[i-k] == 'W') cntw--;
            ans = min(ans, cntw);
        }
        cout << ans << "\n";
    }

    return 0;
}