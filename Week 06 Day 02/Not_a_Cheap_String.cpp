#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string s;
        int p, t[30], res = 0;
        cin >> s >> p;
        for (int i = 0; i < 30; i++)
            t[i] = 0;
        for (int i = 0; i < s.size(); i++) {
            res += s[i] - 'a' + 1;
            t[s[i] - 'a' + 1]++;
        }
        for (int i = 26; i > 0; i--) {
            while (1) {
                if (!t[i])
                    break;
                if (res <= p)
                    break;
                res -= i;
                t[i]--;
            }
        }
        for (int i = 0; i < s.size(); i++) {
            if (t[s[i] - 'a' + 1]) {
                cout << s[i];
                t[s[i] - 'a' + 1]--;
            }
        }
        cout << endl;
    }
    return 0;
}