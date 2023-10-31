#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        s += '1';
        for (int i = 0; i < n;) {
            int d = 0;
            if (s[i + 2] == '0' && s[i + 3] != '0') {
                d = (s[i] - '0') * 10 + (s[i + 1] - '0') * 1;
                cout << char('a' + d - 1);
                i += 3;
            }
            else {
                cout << char('a' + s[i] - '0' - 1);
                i++;
            }
        }
        cout << endl;
    }
    return 0;
}