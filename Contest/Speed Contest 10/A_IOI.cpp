#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    cin >> x;
    if(x <= 8 && x >= 1)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}