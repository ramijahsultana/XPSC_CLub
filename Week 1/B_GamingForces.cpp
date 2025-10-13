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
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];
        
        sort(a.begin(), a.end());
        int ans = 0;
        bool flag = false;
        for(int i=0; i<n; i++)
        {
            if(a[i] == a[i+1])
            {
                a[i] = a[i] -1;
                a[i+1] = a[i+1] -1;
                ans++;
                if(a[i] < 0) a[i] = 0;
                if(a[i+1] < 0) a[i+1] = 0;
                flag = true;

            }
            else
            {
                cout << n << "\n";
                break;
            }
        }

        if(flag) cout << n - ans << "\n";


    }
    

    return 0;
}