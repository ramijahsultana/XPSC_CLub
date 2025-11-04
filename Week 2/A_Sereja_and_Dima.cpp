#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<int> q(n);

    for(int i=0; i<n; i++)
        cin >> q[i];

       
    int ans1 = 0; int ans2 = 0, who =1;
    while(!q.empty())
    {
        int left = q.front(), right = q.back(), mx;
        mx = max(left, right);
        if(who%2 != 0)
        {
            ans1 += mx;
        }
        else
            ans2 += mx;

        if(mx == left)
            q.pop_front();
        else
            q.pop_back();    
        who++;
    }    

    cout << ans1  << " " << ans2 << "\n";




    return 0;
}