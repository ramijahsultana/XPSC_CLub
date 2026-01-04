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
        long long fact = 1;
        long long val;
        for(int i=1; i<=n; i++)
        {
            val = fact = fact * i;
        }

        int last_digit = val % 10;
        cout << last_digit << "\n";
    }

    return 0;
}