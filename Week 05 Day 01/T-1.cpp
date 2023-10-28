#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, q, x, y, c = 1;
    while (cin >> n >> q) {
        if (n == 0 && q == 0) break;
        cout << "CASE# " << c++ << ":" << endl;
        int m[n];
        for (int i = 0; i < n; i++) {
            cin >> m[i];
        }
        sort(m, m + n);
        for (int i = 0; i < q; i++) {
            cin >> x;
            y = lower_bound(m, m + n, x) - m;
            if (y < n && m[y] == x) {
                cout << x << " found at " << y + 1 << endl;
            }
            else {
                cout << x << " not found" << endl;
            }
        }
    }
    return 0;
}