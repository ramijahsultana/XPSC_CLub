#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    //tuple<string, int, string> t = make_tuple("rahim" , 10, "0123");

    tuple<string, int, string> t = {"ahim" , 10, "0123"};
    //cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << "\n";

    auto[name, roll, phone] = t;

    cout << name << " " << roll << " " << phone << "\n";
 
    return 0;
}