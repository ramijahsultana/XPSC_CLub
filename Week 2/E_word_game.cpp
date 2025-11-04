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
        int n, m = 3;
        cin >> n;
        map<string, vector<int>> mp;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++)
            {
                string a;
                cin >> a;
                mp[a].push_back(i);
            }

        }
        
        // for(auto [x, y] : mp)
        // {
        //     cout << x << " - > ";
        //     for(auto val : y)
        //     {
        //         cout << val << " "; 
        //     }
        //     cout << "\n";
        // }
        vector<int> ans(m+1);
        for(auto [x, y] : mp)
        {
            vector<int> v = y;
            if(v.size() == 1)
                ans[v[0]] += 3;
            if(v.size() == 2)
            {
                ans[v[0]]++;
                ans[v[1]]++;   
            }
        }

        for(int i=0; i< m; i++)
            cout << ans[i] << " ";

        cout << endl;    
    }

    return 0;
}