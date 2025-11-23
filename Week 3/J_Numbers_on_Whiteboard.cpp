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
        priority_queue<int> pq;
        for(int i = 1; i <= n; i++)
        {
            pq.push(i);
        }
        vector<pair<int,int>> v;
        for(int i = 1; i < n; i++)
        {
            if(pq.size() == 1)
            {
                break;
            }
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            v.push_back({x,y});
            int ans = ((x+y+1)/2);
            pq.push(ans);
            
        }
        cout << pq.top() << "\n";
        for(auto &it : v)
        {
            cout << it.first << " " << it.second << "\n";
        }
    }

    return 0;
}