#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
      
    sort(v.begin(), v.end());
    int last_element = v.back();
    v.pop_back();
    
    for(int i=0; i < v.size(); i++)
        cout << v[i] << " ";

    return 0;
}