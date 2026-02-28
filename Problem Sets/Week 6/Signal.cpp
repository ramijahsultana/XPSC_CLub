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
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool zero = false;
        int cnt = 0;
        for(int i = 0; i<n; i++)
        {
            if(s[i] == '0')
            {
                zero = true;
                continue;
            }
            else if(zero == true && s[i] == '1')
            {
                cnt++;
            }
        }
        cout << cnt << "\n";
    }

    return 0;
}