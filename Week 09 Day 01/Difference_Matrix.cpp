#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n][n];
        int c = 1;
        int b = 2;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (c <= n * n) {
                    cout << c << " ";
                    c += 2;
                }
                else {
                    cout << b << " ";
                    b += 2;
                }
            }
            cout << endl;
        }
    }
    return 0;
}