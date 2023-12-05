#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
        }
        vector<vector<int>> v(n + 6);
        v[0] = a;
        for (int i = 1; i <= n + 5; ++i) {
            v[i] = v[i - 1];
            vector<int> cnt(n + 1);
            for (int j = 1; j <= n; ++j) {
                cnt[v[i][j]]++;
            }
            for (int j = 1; j <= n; ++j) {
                v[i][j] = cnt[v[i][j]];
            }
        }
        int q;
        cin >> q;
        while (q--) {
            int x, val;
            cin >> x >> val;
            val = min(val, n + 5);
            cout << v[val][x] << endl;
        }
    }
    return 0;
}