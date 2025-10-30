#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    priority_queue<int> pq;
    pq.push(4);
    pq.push(2);
    pq.push(4);
    pq.push(5);
    pq.push(1);
    pq.push(7);
    
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    cout << "\n";
    return 0;
}