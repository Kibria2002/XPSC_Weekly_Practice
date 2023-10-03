#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n;
    string s;
    cin >> n >> s;
    int count = 0;
    for (int i = 0; i < n - 2; i++) {
        if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C') {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}