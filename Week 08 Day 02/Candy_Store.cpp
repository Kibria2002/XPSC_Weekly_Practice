#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        int ans = y;
        if (y - x > 0)
            ans = x + (y - x) * 2;
        cout << ans << endl;
    }
    return 0;
}