#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s, t; cin >> s >> t;
        bool flag = true;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'R') {
                if (t[i] != 'R') {
                    cout << "NO" << endl;
                    flag = false;
                    break;
                }
            }
            else {
                if (t[i] == 'R') {
                    cout << "NO\n";
                    flag = false;
                    break;
                }
            }
        }
        if(flag) cout << "YES\n";
    }
    return 0;
}
