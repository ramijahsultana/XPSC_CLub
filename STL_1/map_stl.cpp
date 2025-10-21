#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<int, int> mp;
    mp[10] = 20;
    mp[2] = 35;
    mp[12] = 26;

    for(auto [key, value] : mp)
    {
        cout << key << " -> " << value << "\n";
    }

    auto it = mp.find(9);
    if(it == mp.end())
        

    return 0;
}