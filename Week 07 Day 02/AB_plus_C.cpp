#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
        if (x == 1) {
            cout << -1 << endl;
            continue;
        }
        if (x <= 1000000)
            cout << x - 1 << " " << 1 << " " << 1 << endl;
        else {
            long long dig = x % 1000000;
            if (dig != 0)
                cout << (x / 1000000) << " " << 1000000 << " " << dig << endl;
            else
                cout << (x / 1000000) << " " << 999999 << " " << x / 1000000 << endl;
        }
    }
    return 0;
}