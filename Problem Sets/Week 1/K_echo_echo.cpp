#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        string s;
        cin >> s;
        if(i%2 != 0)
            cout << s << "\n";
        
    }

    return 0;
}