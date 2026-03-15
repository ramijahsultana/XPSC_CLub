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
        int g = floor(n/k);

        for(int i=1; i<=k; i++)
        {
            cout << i*g << " ";
        }
        cout << "\n";
    }

    return 0;
}