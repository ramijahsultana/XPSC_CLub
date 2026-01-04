#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    int sum = a + b;
    int sum_a = a + (a - 1);
    int sum_b = b + (b - 1);

    if(sum >= sum_a && sum >= sum_b)
        cout << sum << "\n";
    else if(sum_a >= sum && sum_a >= sum_b)
        cout << sum_a << "\n";
    else if(sum_b >= sum && sum_b >= sum_a)
        cout << sum_b << "\n";


    return 0;
}