#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    //tuple<string, int, string> t = make_tuple("rahim" , 10, "0123");

    //tuple<string, int, string> t = {"ahim" , 10, "0123"};
    //cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << "\n";

    // auto[name, roll, phone] = t;

    // cout << name << " " << roll << " " << phone << "\n";

    int n;
    cin >> n;
    tuple<string, int, string> students[n];
    for(int i=0; i<n; i++)
    {
        cin >> get<0>(students[i]) >> get<1>(students[i]) >> get<2>(students[i]);
    }

    for(int i=0; i<n; i++)
    {
        cout << get<0>(students[i]) << " " << get<1>(students[i]) << " " << get<2>(students[i]) << "\n";
    }
 
    return 0;
}