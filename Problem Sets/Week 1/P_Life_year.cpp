#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<float> life(n);
    for (int i = 0; i < n; i++)
    {
        float a, b;
        cin >> a >> b;

        life[i] = (a * b);
    }
    float QALY = 0;
    for(int i=0; i<n; i++)
    {
        QALY = QALY + life[i];
    }

    cout << fixed << setprecision(3) << QALY << "\n";

    return 0;
}