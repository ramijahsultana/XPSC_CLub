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
        string s;
        cin >> s;

       
        int first = -1, last = -1;

        for(int i=0; i<n; i++)
        {
            if(s[i] == 'B')
            {
                first = i;
                break;
            }
                

        }
        for(int i=n-1; i>=0; i--)
        {
           if(s[i] == 'B')
            {
                last = i;
                break;
            }
        }


        int cnt=0;
        for(int i=first; i<=last; i++)
             cnt++;

        cout << cnt << "\n";


    }

    return 0;
}