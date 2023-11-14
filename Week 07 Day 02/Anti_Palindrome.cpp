#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int f[26] = {0};
        int cnte = 0, cnto = 0, cnte1 = 0;
        for (int i = 0; i < n; i++) {
            f[str[i] - 'a']++;
        }
        if (n & 1) {
            for (int i = 0; i < 26; i++) {
                if (f[i] != 0) {
                    if (f[i] & 1)
                        cnto++;
                    else
                        cnte1++;
                }
            }
            if (cnto > 1)
                cout << 0 << endl;
            else if (cnto == 1 && cnte1 >= 1)
                cout << 1 << endl;
            else if (cnto == 1 && cnte1 == 0)
                cout << 2 << endl;
        }
        else {
            for (int i = 0; i < 26; i++) {
                if (f[i] != 0) {
                    if (f[i] & 1)
                        cnte++;
                }
            }
            if (cnte >= 1)
                cout << 0 << endl;
            else
                cout << 1 << endl;
        }
    }
    return 0;
}