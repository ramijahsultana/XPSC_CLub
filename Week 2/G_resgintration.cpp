#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    map<string, int> m;
    while(t--)
    {
        string s;
        cin >> s;
        auto it = m.find(s);
        if(it == m.end())
        {
            cout << "OK\n";
            m[s] = 1;
        }
        else
        {
            cout << s << m[s] << "\n";
            m[s]+=1;
        }
    }

    return 0;
}