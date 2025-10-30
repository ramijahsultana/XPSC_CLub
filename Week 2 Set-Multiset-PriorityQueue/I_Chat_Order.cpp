#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    vector<string> order;
    unordered_set<string> seen;

    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        order.push_back(s);

    }
    vector<string> v;
    for(int i = t-1; i>=0; i--)
    {
        if(!seen.count(order[i]))
        {
            seen.insert(order[i]);
            v.push_back(order[i]);
        }
    }
    for(auto &name : v)
        cout << name << "\n";
   

    return 0;
}