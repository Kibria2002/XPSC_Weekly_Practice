#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.length();
        vector<pair<char, int>> v;
        for (int i = 1; i < n - 1; i++) {
            if ((s[i] >= s[0] && s[i] <= s[n - 1]) || (s[i] <= s[0] && s[i] >= s[n - 1]))
            {
                v.push_back({s[i], i + 1});
            }
        }
        sort(v.begin(), v.end());
        if (s[0] > s[n - 1]) {
            reverse(v.begin(), v.end());
        }
        cout << abs((int)s[0] - (int)s[n - 1]) << " " << v.size() + 2 << endl;
        cout << 1 << " ";
        for (int i = 0; i < v.size(); i++) {
            cout << v[i].second << " ";
        }
        cout << n << " ";
        cout << endl;
    }
    return 0;
}