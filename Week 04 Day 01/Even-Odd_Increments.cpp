#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        long long s = 0;
        int p[2] = {0, 0};
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            s += x;
            p[x & 1]++;
        }
        while (q--) {
            int t, x;
            cin >> t >> x;
            s += 1LL * p[t] * x;
            if (x & 1) {
                p[t] = 0;
                p[t ^ 1] = n;
            }
            cout << s << endl;
        }
    }
    return 0;
}