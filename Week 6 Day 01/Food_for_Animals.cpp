#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        x -= min(x, a);
        y -= min(y, b);
        if (x + y <= c)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}