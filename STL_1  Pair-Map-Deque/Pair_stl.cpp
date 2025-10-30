#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // pair<string, int> student = make_pair("Frozen", 10);
    // cout << student.first << " " << student.second << "\n";

    //pair<string, int> student{"GenZwes", 10};
    // cout << student.first << " " << student.second << "\n";

    // auto[name, age] = student;

    // cout << name << " " << age << "\n";

    int n;
    cin >> n;
    pair<string, int> students[n];
    for(int i=0; i<n; i++)
    {
        cin >> students[i].first >> students[i].second;
    }
    // for(int i=0; i<n; i++)
    // {
    //     cout << students[i].first << " " << students[i].second << "\n";
    // }

    for(auto[x, y] : students)
    {
        cout << x << " " << y << "\n";
    }


    return 0;
}