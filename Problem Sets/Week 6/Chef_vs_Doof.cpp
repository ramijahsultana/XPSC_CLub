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
        int even = false;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            if(x%2 == 0)
            {
                even = true;
            }
        }
        //if any of number is even lcm become even
        if(even == false)
            cout << "YES\n";
        else
            cout << "NO\n";    
    }

    return 0;
}