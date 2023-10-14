#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s[n];
        map<string, bool> mp;
        for (int i = 0; i < n; i++) {
            cin >> s[i];
            mp[s[i]] = true;
        }
        for (int i = 0; i < n; i++) {
            bool k = false;
            for (int j = 1; j < s[i].length(); j++) {
                string pref = s[i].substr(0, j), suff = s[i].substr(j, s[i].length() - j);
                if (mp[pref] && mp[suff]) {
                    k = true;
                }
            }
            cout << k;
        }
        cout << endl;
    }
    return 0;
}