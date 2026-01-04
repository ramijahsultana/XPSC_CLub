#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,x;
    cin >> n >> x;
    vector<pair<int, int>> a;
    for(int i=1; i<=n; i++)
    {
        int z;
        cin >> z;
        a.pb({z, i});
    }
    sort(a.begin(), a.end());
    ll sum = 0;
    for(int i=0, j=n-1; i<j;)
    {
        if(a[i].first + a[j].first > x)
        {
            j--;
        }
        else if(a[i].first + a[j].first < x)
        {
            i++;

        }
        else
        {
            cout << a[i].second << " " << a[j].second << "\n";
            return 0;
        }
    }
    cout << "IMPOSSIBLE\n";
    return 0;
}