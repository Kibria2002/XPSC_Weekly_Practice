#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int q, w, e, r, t, y;
        cin >> q >> w >> e >> r >> t >> y;
        cout << (abs(q - e) + abs(w - r) + 1 + abs(q - t) + abs(w - y) + 1 - abs(e - t) - abs(r - y)) / 2 << endl;
    }
    return 0;
}