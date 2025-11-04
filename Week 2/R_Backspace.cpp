#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    deque<char> d;

    for (char c : s)
    {
        if (c == '<')
        {
            if (!d.empty())
                d.pop_back();
        }
        else
        {
            d.push_back(c);
        }
    }

    for (char c : d)
        cout << c;
    cout << "\n";

    return 0;
}
