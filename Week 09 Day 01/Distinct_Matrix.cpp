#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n < 3)
            cout << -1 << endl;
        else {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < i; j++)
                    cout << 0;
                for (int j = i; j < n; j++) {
                    if (j == n - 1 && i == n - 2)
                        cout << 0;
                    else
                        cout << 1;
                }
                cout << endl;
            }
        }
    }
    return 0;
}