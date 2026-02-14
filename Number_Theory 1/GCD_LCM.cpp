#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

//Formula: GCD(a, b) * LCM(a, b) = a * b

int GCD(int a, int b)
{
    return __gcd(a, b); // O(Log(min(a, b)))
}

int LCM(int a, int b)
{
    // return (a * b) / GCD(a, b); // O(Log(min(a, b)))
    return (a / GCD(a, b)) * b;    // to avoid overflow
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    cout << "GCD: " << GCD(a, b) << "\n";
    cout << "LCM: " << LCM(a, b) << "\n";

    return 0;
}