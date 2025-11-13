#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        int m;
        cin >> m;
        while(m--)
        {
            string s;
            cin >> s;
            if(s.size() != n)
            {
                cout << "NO\n";
                continue;
            }   
            map<int, char> ch;
            map<char, int> num;
            for(int i=0; i<n; i++)
            {
                ch[a[i]] = s[i];
                num[s[i]] = a[i];
            }
            bool match = true;
            for(int i=0; i<n; i++)
            {
                if(ch[a[i]] != s[i] || num[s[i]] != a[i])
                {
                    match = false;
                    break;
                }
            }
            if(match)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }

    return 0;
}