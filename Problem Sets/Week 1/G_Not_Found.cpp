#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    sort(s.begin(), s.end());
    bool found = false;
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (s.find(i) == string::npos)
        {
            cout <<  i << "\n";
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "None\n";
    }

    return 0;
}