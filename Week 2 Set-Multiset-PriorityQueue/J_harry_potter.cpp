#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> nm;
    unordered_set<string> seen;
    for(int i=0; i<n; i++)
    {
        string s;
        cin >> s;
        nm.push_back(s);
    }
    
    for(int i=0; i<n; i++)
    {
        if(!seen.count(nm[i]))
        {
            cout << "NO\n";
            seen.insert(nm[i]);
        }
        else
            cout << "YES\n";
    }

    return 0;
}   