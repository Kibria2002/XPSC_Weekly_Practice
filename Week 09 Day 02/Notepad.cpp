#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        int flag = 0;
        for (int i = 0; i < n - 2; i++) {
            for (int j = i + 2; j < n; j++) {
                if (s[i] == s[j] && s[i + 1] == s[j + 1]) {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}