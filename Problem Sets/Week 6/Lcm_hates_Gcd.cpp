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
        ll a,b;
        cin >> a >> b;

        cout << a - __gcd(a,b) << "\n";
    }

    return 0;
}