#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

bool isprime(ll n)
{
    if (n < 2)
        return false;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

ll nextprime(ll x)
{
    while (true)
    {
        if (isprime(x))
        {
            return x;
        }
        x++;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;

        ll p = nextprime(x);
        ll q = nextprime(p + 1);

        cout << p * q << "\n";
    }

    return 0;
}