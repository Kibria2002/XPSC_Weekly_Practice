#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        char a, b;
        cin >> a >> b;
        cout << int(25 * (a - 97) + (a > b ? b - 96 : b - 97)) << endl;
    }
    return 0;
}