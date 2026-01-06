#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int one = 0, zero = 0;
        for (int i = 0; i < n; i++)
        {
            if(k==0)
             break;
            if (s[i] == '0')
            {
                one++;
                k--;
            }
           
        }

        // if (zero == k)
        // {
        //     cout << one + zero << "\n";
        // }
        // else if (zero > k)
        // {
        //     cout << k + one << "\n";
        // }
        // else
        // {
        //     cout << n << "\n";
        // }

        cout << k+one << "\n";
    }

    return 0;
}