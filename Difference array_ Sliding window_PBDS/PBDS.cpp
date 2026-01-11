#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define pb push_back

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag,
                  tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    pbds<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    
    // for(auto[x , y] : s)
    // {
    //     cout << x << " " << y << "\n";
    // }

    cout << s.order_of_key(5) << "\n"; // number of elements strictly less than 5

    auto it = s.find_by_order(2); // 0 based indexing
    cout << *it << "\n";

    return 0;
}