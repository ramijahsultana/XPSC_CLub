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
        vector<int> a(n);
        map<int, int> idx;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            idx[a[i]] = i; 
        }

        ll ans = 0;
        for(int i=n; i>0; i--)
        {
            int index = idx[i];
            int left = 0, right = 0;
            for(int j = index-1; j>=0; j--)
            {
                if(a[j]<i) left++;
            }
            for(int j = index+1; j<n; j++)
            {
                if(a[j]<i) right++;
            }

            ans += min(left, right);
        }

        cout << ans << "\n";
    }

    return 0;
}