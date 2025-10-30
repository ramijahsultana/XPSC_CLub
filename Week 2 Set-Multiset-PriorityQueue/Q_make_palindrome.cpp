#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    vector<int> freq(26, 0);
    for (char c : s)
        freq[c - 'A']++;

    int odd_count = 0;
    int odd_index = -1;

    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 != 0) {
            odd_count++;
            odd_index = i;
        }
    }

    if (odd_count > 1) {
        cout << "NO SOLUTION\n";
        return 0;
    }

    string left = "", middle = "";

    for (int i = 0; i < 26; i++) {
        left += string(freq[i] / 2, 'A' + i);
    }

    if (odd_index != -1) {
        middle += string(freq[odd_index] % 2, 'A' + odd_index);
    }

    string right = left;
    reverse(right.begin(), right.end());

    cout << left + middle + right << "\n";
}
