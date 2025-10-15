#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<int> dq(n);
    for(int i=0; i<n; i++)
        cin >> dq[i];

    dq.push_back(10);
    dq.push_front(5);
    dq.push_back(15);
    sort(dq.rbegin(), dq.rend());    

    int last_element = dq.back();
    dq.pop_back();  

    int mx = *max_element(dq.begin(), dq.end());
    int mn = *min_element(dq.begin(), dq.end());
    
    for(auto x : dq)
        cout << x << " ";

    return 0;
}