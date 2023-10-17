#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        bool found_odd = false;
        if (a[0] % 2 == 1) {
            cout << "YES" << endl;
            continue;
        }
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 1) {
                cout << "NO" << endl;
                found_odd = true;
                break;
            }
        }
        if (!found_odd) {
            cout << "YES" << endl;
        }
    }
    return 0;
}