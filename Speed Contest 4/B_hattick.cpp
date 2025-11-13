#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        bool find = false;
        string t;
        for (int i = 0; i < 6; i++)
        {
            char s;
            cin >> s;
            t.push_back(s); 
           
        }
        for(int i = 0; i < 6; i++)
        {
            if(t[i] == 'W' && t[i+1] == 'W' && t[i+2] == 'W')
            {
                find = true;
            }
        }
        
        if (find)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}