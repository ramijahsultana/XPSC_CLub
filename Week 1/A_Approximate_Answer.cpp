#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, k;
    cin >> x >> y >> k;

    int sub = abs(x-y);

    if(sub <= k)
        cout << "Yes\n";
    else
        cout << "No\n";     
    

   

    return 0;
}