#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n == 1 || n == 2) {
            cout << 0 << endl;
        }
        if (n == 3) {
            cout << 2 << endl;
        }
        if (n == 4) {
            cout << 3 << endl;
        }
        if (n == 5) {
            cout << 5 << endl;
        }
        if (n == 6) {
            cout << 6 << endl;
        }
        if (n >= 7) {
            if (n % 2 != 0) {
                int k = (n - 1) / 2;
                cout << n + abs(k - 2) << endl;
            }
            if (n % 2 == 0) {
                int k = n / 2;
                cout << n + abs(k - 3) << endl;
            }
        }
    }
    return 0;
}