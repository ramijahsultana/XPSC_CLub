#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //O(N) approach
    // int n;
    // cin >> n;
    // for(int i=1; i<=n; i++)
    // {
    //     if(n%i==0)
    //         cout << i << " ";
    // }
    // cout << "\n";


    //O(sqrt(N)) approach
    int n;
    cin >> n;
    vector<int> divisors;
    for(int i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            divisors.pb(i);
            if(n/i != i)
                divisors.pb(n/i);
        }
    }
    sort(divisors.begin(), divisors.end());
    for(int d : divisors)
        cout << d << " ";
    cout << "\n";

    return 0;
}