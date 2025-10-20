#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    set<pair<string, string>> s;
    for(int i=0; i<t; i++)
    {
        string sp, co;
        cin >> sp >> co;
        s.insert ({sp, co}); 
    }

    cout << s.size() << "\n";

    return 0;
}