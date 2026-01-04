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
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int odd = 0;
        for(int i=0;i<n; i++)
        {
            if(a[i] % 2 == 1)
            {
                odd++;
            }
        }
        if(odd == 0)
        {
            cout << "0\n";
        }
        else if(odd%2 == 1)
        {
            cout << n << "\n";
        }
        else 
        {
            cout << n-1 << "\n";
        }
    }

    return 0;
}