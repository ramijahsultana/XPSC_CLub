#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

bool is_prime(ll n)
{
    if(n == 1 || n == 0)
        return false;
    
    for(ll i = 2; i*i <= n; i++)
    {
        if(n%i == 0)
            return false;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;   
    if(is_prime(n))
        cout << n << " is prime\n";
    else
        cout << n << " is not prime\n";


    return 0;
}