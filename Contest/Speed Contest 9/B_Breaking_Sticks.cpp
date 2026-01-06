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
        ll sum = 0;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            sum += a[i]-1;
        }

        cout << sum << "\n";
    }

    return 0;
}