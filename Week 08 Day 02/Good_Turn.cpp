#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if ((a + b) > 6)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}