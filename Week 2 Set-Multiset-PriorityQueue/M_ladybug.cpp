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
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;

        int a_odd_one = 0, a_even_one = 0;
        int b_odd_zero = 0, b_even_zero = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
            {
                if (a[i - 1] == '1')
                    a_odd_one++;
                if (b[i - 1] == '0')
                    b_odd_zero++;
            }
            else
            {
                if (a[i - 1] == '1')
                    a_even_one++;
                if (b[i - 1] == '0')
                    b_even_zero++;
            }
        }
        if(b_even_zero >= a_odd_one && b_odd_zero >= a_even_one)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}