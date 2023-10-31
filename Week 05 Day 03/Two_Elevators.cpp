#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (c > b)
            b = 2 * c - b;
        cout << (a == b ? 3 : (a > b) + 1) << endl;
    }
    return 0;
}