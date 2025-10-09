#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while(cin >> n)
    {
        if(n == 0) break;
        int val = (n*(n+1)*(2*n+1))/6;
        cout << val << "\n";

    }

    return 0;
}