#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int s, t;
    cin >> s >> t;

    int cnt = 0;
    for(long long i=0; i<=s; i++)
    {
        for(long long j=0; j<=s; j++)
        {
            for(long long k=0; k<=s; k++)
            {
                if(i+j+k <= s && i*j*k <= t)
                {
                    cnt++;
                }
            }
        }
    }

    cout << cnt << "\n";

    return 0;
}