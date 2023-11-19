#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        if ((x / 2 > y / 2) || (x % 2 == 1 && (x == y || x + 1 == y))) {
            cout << "CHEF" << endl;
        }
        else {
            cout << "CHEFINA" << endl;
        }
    }
    return 0;
}