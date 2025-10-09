#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> a(n);
    for(long long i=0; i<n; i++)
        cin >> a[i];
    
    long long cnt = 0;
   
    for(long long i=1; i<n; i++)
    {
        if(a[i] < a[i-1])
        {
            cnt += (a[i - 1] - a[i]); 
            a[i] = a[i - 1];    
        }
    }  
    
    cout << cnt << "\n";

    return 0;
}