#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        
        set<int> s;
        set<int> temp;
        int ans = 1;
        s.insert(a[0]);
        for (int i = 1; i < n; ++i)
        {
            auto it = s.find(a[i]);
            if(it != s.end())
            {
                s.erase(it);
                temp.insert(a[i]);
            }
            else{
                temp.insert(a[i]);
            }

            if(s.empty())
            {
                ans++;
                s = temp;
                temp.clear();
            }
        }
        cout << ans << "\n";
            
        
        
    }
    return 0;
}


