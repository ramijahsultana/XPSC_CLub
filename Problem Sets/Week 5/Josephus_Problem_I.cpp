#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    queue<int> q;
    for (int i = 1; i <= n; i++)
        q.push(i);

    while (!q.empty())
    {
        int first = q.front();
        q.pop();
        if (q.empty())
        {
            cout << first << " ";
            break;
        }
        int second = q.front();
        q.pop();
        cout << second << " ";
        q.push(first);
    }
    return 0;
}