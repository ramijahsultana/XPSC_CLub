#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    bool hiss_found = false;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == 's' && s[i+1] == 's')
        {
           hiss_found = true;
           break;
        }
    }

    if(hiss_found)
        cout << "hiss\n";
    else
        cout << "no hiss\n";

    return 0;
}