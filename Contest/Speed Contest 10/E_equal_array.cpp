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
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int val = -1;
        bool equal = true;
        for(int i = 0; i < n; i++)
        {
            if(a[i] == 0) continue;
            if(val == -1)
            {
                val = a[i];
            }
            else if(a[i] != val)
            {
                equal = false;
                break;
            }
            
        }
        if(equal)
            cout << "YES\n";
        else
            cout << "NO\n";

    }

    return 0;
}