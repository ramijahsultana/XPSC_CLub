#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n));
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin >> v[i][j];
    return 0;
}