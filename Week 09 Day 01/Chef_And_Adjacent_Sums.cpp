#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long a[n], i, b[n];
        unordered_map<int, int> m;
        for (i = 0; i < n; i++) {
            cin >> a[i];
            b[i] = a[i];
            m[a[i]]++;
        }
        sort(b, b + n);
        if (b[n - 1] == b[n - 2]) {
            int c = m[b[n - 1]];
            int d = n - c;
            if (d >= (c - 1)) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
        else {
            int c = m[b[n - 2]];
            if ((c + 1) == n) {
                cout << "NO" << endl;
            }
            else {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}