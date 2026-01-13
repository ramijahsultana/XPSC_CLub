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
        int r, g, b;
        cin >> r >> g >> b;
        int red = g + b;
        int green = r + b;
        int blue = r + g;
        if(red >= r && green >= g && blue >= b)
            cout << "YES\n";
        else
            cout << "NO\n";

    }

    return 0;
}