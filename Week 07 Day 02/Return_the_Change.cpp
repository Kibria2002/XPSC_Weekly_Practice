#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int a;
        cin >> a;
        if (a % 10 == 0) {
            cout << (100 - a) << endl;
        }
        else {
            int c = (a + 5) / 10 * 10;
            cout << (100 - c) << endl;
        }
    }
    return 0;
}