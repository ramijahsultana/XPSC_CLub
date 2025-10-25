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
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        deque<int> d;
        d.push_back(v[0]);
        for(int i=1; i<n; i++)
        {
            if(v[i] < d.front())
                d.push_front(v[i]);
            else
                d.push_back(v[i]);    
        }

        for(int x : d)
        {
            cout << x << " ";
        }
        cout << "\n";
        
        
    }

    return 0;
}