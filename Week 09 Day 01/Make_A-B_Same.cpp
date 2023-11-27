#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n];
        int o = 0, z = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        if (a[0] != b[0] || a[n - 1] != b[n - 1]) {
            cout << "NO" << endl;
            continue;
        }
        o = n + 1;
        z = -1;
        bool bo = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i] && b[i] == 0) {
                bo = 1;
                break;
            }
        }
        if (bo) {
            cout << "NO" << endl;
            continue;
        }
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                bo = 1;
            }
            if (a[i] == 1) {
                o = i;
                break;
            }
        }
        if (bo == 0) {
            cout << "YES" << endl;
            continue;
        }
        if (o < n + 1) {
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
    return 0;
}