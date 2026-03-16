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
        ll r, c;
        cin >> r >> c;
        for(int i=1; i<=r; i++)
        {
            for(int j=1; j<=c; j++){
                cout << i+j << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}