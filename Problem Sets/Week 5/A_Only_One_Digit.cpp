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
        string s;
        cin >> s;
        set<int> n;
        for(char c : s)
            n.insert(c - '0');

        cout << *n.begin() << '\n';
    }

    return 0;
}