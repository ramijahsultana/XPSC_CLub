#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(4);
    pq.push(2);
    pq.push(4);
    pq.push(5);
    pq.push(1);
    pq.push(7);


    cout << pq.size() << "\n";
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    cout << "\n";

    cout << pq.empty() << "\n";


    return 0;
}