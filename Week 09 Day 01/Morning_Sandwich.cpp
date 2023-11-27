#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int b, c, h;
        cin >> b >> c >> h;
        cout << 2 * (min(b - 1, c + h)) + 1 << endl;
    }
    return 0;
}