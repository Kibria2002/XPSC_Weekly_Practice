#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        if (y % x == 0)
            cout << 1 << ' ' << y / x << endl;
        else
            cout << "0 0" << endl;
    }
    return 0;
}